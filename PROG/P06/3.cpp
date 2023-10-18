#include <vector>
#include <iostream>
using namespace std;
 
//! Print vector with elements of type T.
template <typename T>
void print(const vector<T>& v) {
  cout << "[ ";
  for (size_t i = 0; i < v.size(); i++) {
    cout << v[i] << ' ';
  }
  cout << "]\n";
}



template <typename T>
void normalise(vector<T>& v, const T& min, const T& max){
    int sizing= v.size();
    for (int i=0; i<sizing; i++){
        if(v[i]< min){
            v[i] = min;
        }else if(v[i]> max){
            v[i] = max;
        }else{
            continue;
        }
    }
}