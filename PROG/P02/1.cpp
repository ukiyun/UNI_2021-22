//returns the highest integer

#include <iostream>

using namespace std;

int adigits(int a, int b, int c){
    int maior = -1;
    int meio = -1;
    int menor = -1;
    int numero = 0;
    if (a > b && a >c){
        maior = a;
        if (b>c){
            meio = b;
            menor = c;
        }else{
            meio = c;
            menor = b;
        }
    }
    if (b > a && b >c){
        maior = b;
        if (a>c){
            meio = a;
            menor = c;
        }else{
            meio = c;
            menor = a;
        }
    }
    if (c > b && c>a){
        maior = c;
        if (b>a){
            meio = b;
            menor = a;
        }else{
            meio = a;
            menor = b;
        }
    }
    if (a==b){
        if (a>c){
            maior= a;
            meio = b;
            menor = c;
        } else{
            menor = a;
            meio = b;
            maior = c;
        }
    }
    if (a==c){
        if (a>b){
            maior= a;
            meio = c;
            menor = b;
        } else{
            menor = a;
            meio = c;
            maior = b;
        }
    }
    if (b==c){
        if (b>a){
            maior= b;
            meio = c;
            menor = a;
        } else{
            menor = b;
            meio = c;
            maior = a;
        }
    }
    numero = maior*100 + meio*10 + menor;
    return numero;
}