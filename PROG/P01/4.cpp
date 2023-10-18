//pernicious and prime

#include <iostream>

using namespace std;
bool check_prime(int x){
    bool is_prime = true;
    if (x==0 || x==1){
            is_prime = false;
        }
        for (int i = 2; i <= x/2; ++i) {
            if (x % i == 0) {
                is_prime = false;
                break;
            }
        }
    return is_prime;
}
int binary(int x){
    int binar = 0;
    int j =x;
    while (j!=0){
        if (j%2==0){
            binar = binar*10 + 0;
        } else{
            binar = binar*10 + 1;
        }
        j /= 2;
    }
    int binary=0, remainder;
    while (binar!=0){
        remainder = binar %10;
        binary = binary*10 + remainder;
        binar /=10;
    }
    return binary;
}
bool check_pernicious (int x){
    bool is_pernicious=false;
    int counter = 0;
    while (x!=0){
        if (x%10 == 1){
            counter += 1;
        }
        x /= 10;
    }
    if (check_prime(counter)){
        is_pernicious=true;   
    }
    
    return is_pernicious;
}
int main() {
    int lower, upper;
    cin >> lower >> upper;
    for (int x=lower; x<=upper; x++){
        if (check_prime(x)){
            if (check_pernicious(binary(x))){
                cout << x << endl;
            }
        }
    }
    return 0;
}