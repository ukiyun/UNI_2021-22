#include <map>
#include <list>
#include <string>
#include <iostream>
#include <climits>
using namespace std;


string cat_keys(list<map<string, unsigned>> lst){
    string result;
    unsigned smallest = UINT_MAX;
    for (auto currmap: lst){
        for (auto keysvalues: currmap){
            if(keysvalues.second<smallest){
                smallest = keysvalues.second;
                result = "";
                for(auto keysvalues: currmap){
                    result.append(keysvalues.first);
                }
            }
        }

    }
    return result;
}

