#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

//! Show file name and the contents.
void show_file(const string& file) {
  ifstream in(file);
  cout << "==> " << file << " <==\n";
  for (string line; getline(in, line); ) cout << line << '\n';
}


void calc_medians(const string& input_fname, const string& output_fname){
    ifstream in(input_fname);
    ofstream out(output_fname);
    string line;
    string identifier;
    double num;
    vector<double> v;


    while(getline(in,line)){
        stringstream iss(line);
        iss >> identifier;
        if(identifier[0] == '#'){continue;}
        while (iss>> num){
            v.push_back(num);
        }
        sort(v.begin(),v.end());
        if(v.size()%2!=0){
            out<<fixed<<setprecision(1)<<identifier<<' '<<v[v.size()/2]<<'\n';
        }else{
            out<<fixed<<setprecision(1)<<identifier<<' '<<0.5* (v[v.size()/2 -1] + v[v.size()/2])<<'\n';
        }
        
        v.clear();
    }
} 