// sum of all n fractions in fa

#include <iostream>

using namespace std;

struct fraction {
   int num; // Numerator
   int den; // Denominator
}; 

int gcd(int a, int b){
    if (b== 0){
        return a;
    }else{
        return gcd(b, a%b);   
    }
}

fraction sum(const fraction fa[], int n){
    fraction r = {0,1};
    for (int x=0; x< n; x++){
        r = {(r.num * fa[x].den + fa[x].num * r.den), (fa[x].den * r.den)};   
    }
    r = {(r.num/gcd(r.num, r.den)), (r.den/gcd(r.num, r.den))};
    if (r.den<0){
        r.num *= -1;
        r.den *= -1;
    }


    return r;

}
