#include <iostream>
#include <fstream>
#include <string>
 
using namespace std;

int count(const string& fname, const string& word){
    int alpha = 0;
    string word2 = word;
    string charr;
    ifstream in(fname);

    while (in>>charr){
        for(unsigned long i = 0; i<word.length(); i++){
            word2[i] = tolower(word2[i]);
        }
        for(unsigned long j = 0; j< charr.length(); j++){
            charr[j]= tolower(charr[j]);
        }
        if(word2 == charr){
            alpha += 1;
        }
    }

    return alpha;
}