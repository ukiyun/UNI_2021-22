//gregory leibniz

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    int k,d;
    cin >> k >> d;
    double equation;
    double series=0;
    for (int n =0; n<=k; n++){
        equation = pow(-1, n) / (2*n + 1);
        series = series + equation;
    }
    double result = series * 4;
    cout << fixed;
    cout << setprecision (d) << result; 
    return 0;
}