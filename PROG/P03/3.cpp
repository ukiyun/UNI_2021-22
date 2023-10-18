// merge arrays

#include <iostream>

using namespace std;

void merge_arrays(const int a[], int na, const int b[], int nb, int c[]){
    int k = 0;
    int i=0;
    int j=0;
    
    while (i<na && j<nb){
        if (a[i]<b[j]){
            c[k++]=a[i++];
        }else{
            c[k++]=b[j++];
        }
                    
    }
    while (i<na){
        c[k++] = a[i++];
    }
    while (j<nb){
        c[k++] = b[j++];
    }

}