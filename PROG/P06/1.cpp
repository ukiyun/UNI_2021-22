#include <string>
#include <iostream>
using namespace std;

bool pangram(const string& s, string& m){
    int sizing = s.length();
    int alphabet[26] = {0};
    for (int i =0; i<sizing; i++){
        char temp = s[i];
        if(temp == ' '){
            continue;
        }else{
            temp = tolower(temp);
            alphabet[temp-97] += 1;
        }
    }
    int counter = 0;
    for (int j=0; j<26; j++){
        if (alphabet[j] >0){
            continue;
        }else{
            counter += 1;
            m.push_back(char(j+97));
        }

    }

    if (counter >0){
        return false;
    }else{
        return true;
    }
}