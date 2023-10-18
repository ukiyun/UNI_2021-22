#include <iostream>
#include <sstream>
#include <string>
#include <set>
#include "Page.h"
#include "Book.h"
 
using namespace std;

//! Builds "index" for the "words" received as parameter
void Book::build_index(const set<string>& words) {
  for(string word : words) {
    for(size_t i = 0; i < book_.size(); ++i) {
      Page page = book_[i];
      for(size_t j = 0; j < page.get_num_lines(); ++j) {
        string line = page.get_line(j);
        istringstream iss(line);
        for(string temp; iss >> temp;) {
          if(temp == word) {
            auto find = index_.find(word);
            if(find != index_.end()) {
              find->second.insert(i+1);
            }
            else {
              set<size_t> p;
              p.insert(i+1);
              index_[word] = p;
            }
          }
        }
      }
    }
  }
}