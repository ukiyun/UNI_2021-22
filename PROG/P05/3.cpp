#include <iostream>

using namespace std;

bool anagrams(const char a[], const char b[], int& n){
    int alphabet[26] = {0};
    int i = 0;
    while (a[i]!= '\0'){
        char c = a[i];
        if (c>=65 && c<=90){
            alphabet[c-65]++;
        }else if(c>=97 && c<=122){
            alphabet[c-97]++;
        }
        i++;
    }
    int j = 0;
    while (b[j]!= '\0'){
        char d = b[j];
        if (d>=65 && d<=90){
            alphabet[d-65]--;
        }else if(d>=97 && d<=122){
            alphabet[d-97]--;
        }
        j++;
    }
    n = 0;
    for (int k = 0; k<26; k++){
        if (alphabet[k]>=0){
            n += alphabet[k];
        }else{
            n-= alphabet[k];
        }
    }

    if (n>0){
        return false;
    }else{
        return true;
    }
}





int main(){
    char a[] = " R o m a ";
    char b[] = "Amor";
    int n = -1;
    bool r = anagrams(a, b, n);
    cout << '\"' << a << '\"' << ' '
        << '\"' << b << '\"' << ' '
        << boolalpha << r << ' ' << n << '\n';
    return 0;
}