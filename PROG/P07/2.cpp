#include <iostream>
#include <fstream>
#include <sstream>
 
using namespace std;
 
struct wcresult {
  unsigned int lines;
  unsigned int words; 
  unsigned int bytes; 
};


wcresult wc(const string& filename){
    ifstream in(filename);
    wcresult resolution = {0,0,0};
    string line;
    while (getline(in,line)){
        resolution.lines += 1;
        resolution.bytes += line.length()+1;
        string x;
        istringstream iss(line);
        while (iss >> x){
            resolution.words += 1;
        }
    }
    return resolution;
}