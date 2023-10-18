#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

//! Show file contents with line number information and 
//! the '|' character indicating the begining and end of lines.
void print(const std::string& file) {
  ifstream in(file);
  size_t line_nr = 1;
  for (string line; getline(in, line);) {
     cout << line_nr << "|" << line << "|\n";
     line_nr++;
  }
}

string uppercase(string in){
    for(char &c: in){c=toupper(c);}
    return in;
}


void normalise(const string& input_fname, const string& output_frame){
    ifstream in(input_fname);
    ofstream out(output_frame);
    string line, word;

    while (getline(in,line)){
        istringstream iss(line);
        if(iss>>word){
            line = uppercase(line.substr(line.find_first_not_of(' '), line.length()));
            line = line.substr(0, line.find_last_not_of(' ')+1);
            out << line << endl;
        }

    }
}