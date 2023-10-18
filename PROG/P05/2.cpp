#include <iostream>

using namespace std;

void remove_duplicates(int a[], int& size){
    int next = 0;
    int sizeChange = 0;
    for (int i= 0; i <size; i++){
        bool duplicate = false;
        for (int j=0; j<i; j++){
            if (a[i] == a[j]){
                duplicate = true;
            }
        }
        if (duplicate){
            sizeChange++;
            continue;
        }
        int smallest = i;
        for (int j=i; j<size; j++){
            if (a[j]<a[smallest]){
                smallest = j;
            }
        }
        a[next] = a[smallest];
        next++;
    }
    size -= sizeChange;
}

void print(int a[], int size) {
  cout << "[ ";
  for (int i = 0; i < size; i++)
    cout << a[i] << " ";
  cout << "]";
  cout << endl;
}
