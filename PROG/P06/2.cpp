#include <string>
#include <vector>
#include <iostream>
using namespace std;
 
//! Print vector of strings.
void print(const vector<string>& v) {
  cout << "[ ";
  for (size_t i = 0; i < v.size(); i++) {
    cout << '\"' << v[i] << "\" ";
  }
  cout << "]\n";
}

void split(const string& s, vector<string>& v){
    int sizing = s.length();
    string temp;
    for (int i=0; i<sizing; i++){
        char tempo = s[i];
        if(tempo != ' '){
            temp.push_back(tempo);
            if(i==sizing-1){
                v.push_back(temp);
                break;
            }
        }else{
            if(temp != ""){
                v.push_back(temp);
                temp="";
            }else{
                continue;
            }
        }
    }    
}