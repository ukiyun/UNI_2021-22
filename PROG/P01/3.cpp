// prime numbers

#include <iostream>

using namespace std;

int main() {
    bool is_prime = true;
    int n;
    cin >> n;
    for (int x=0; x<=n; x++){
        if (x==0 || x==1){
            is_prime = false;
        }
        for (int i = 2; i <= x/2; ++i) {
            if (x % i == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime){
            cout << x << endl;
        }
        is_prime = true;
    }
    return 0;
}