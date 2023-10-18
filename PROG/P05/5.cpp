#include "node.cpp"
#include <iostream>

using namespace std;

node* reverse(const node* n){
    
}











//driver code
int main(){
    node* a = build(1, build(2, build(3,build(4, build(5, nullptr)))));
    node* b = reverse(a);
    print(b); 
    destroy(a); destroy(b);    
    return 0;
}

