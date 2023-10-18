// fizzbuzz game

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int x=1; x<= n; x++) {
        if (x%3==0 && x%5==0){
            continue;
        } else if (x%3==0) {
            cout << "Fizz" << " ";
        } else if (x%5==0) {
            cout << "Buzz" << " ";
        } else {
            cout << x << " ";
        }
            
    }
    return 0;
}