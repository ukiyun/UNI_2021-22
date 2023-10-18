#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <cfloat>

using namespace std;

//! Show file name and its contents.
void show_file(const string& file) {
  ifstream in(file);
  cout << "==> " << file << " <==\n";
  for (string line; getline(in, line); ) cout << line << '\n';
}

bool average(const string& input_fname, const string& output_fname)
{
    ifstream in(input_fname);
    if(in.fail()) return false;
    ofstream out(output_fname);
    string line;
    int counter = 0;

    while(getline(in,line))
    {
        istringstream iss(line);
        int size = 0;
        double value,result = 0;
        counter++;

        while(iss >> value)
        {
            result+=value;
            size++;
        }

        out << fixed << setprecision(3) << result/size << '\n';
    }
    out << "lines=" << counter;
    return true;
}