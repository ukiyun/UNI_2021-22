#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <map>
#include <algorithm>
 
using namespace std;

//! print map in one line
void show_map(const map<string, size_t>& count) {
  cout << "[ ";
  for (const auto& e : count)   {
    cout << e.first << ":" << e.second << ' ';
  }
  cout << "]\n";
}

void count_words(const string& str, map<string, size_t>& count) { // 2
    istringstream is(str);
    for(string x; is >> x;) {
        transform(x.begin(), x.end(), x.begin(), ::tolower);
        auto map_it = count.find(x);
        if(map_it != count.end()) {
            map_it->second += 1;
        }
        else {
            count.insert({x, 1});
        }
    }
}