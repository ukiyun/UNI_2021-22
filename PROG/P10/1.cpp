#include <map>
#include <string>
using namespace std;
unsigned roman_to_arab(const string& roman) { // 1
    unsigned roman_int = 0;

    map<char, unsigned> map_roman = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    for(size_t i = 0; i < roman.size(); i++) {
        if(i != roman.size()-1 && map_roman[roman[i]] < map_roman[roman[i+1]])
            roman_int -= map_roman[roman[i]];
        else
            roman_int += map_roman[roman[i]];
    }

    return roman_int;
}