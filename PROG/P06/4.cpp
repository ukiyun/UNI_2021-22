#include <string>
#include <vector>
#include <iostream>
using namespace std;

string longest_prefix(const vector<string>& v) {
    int num = 0;

    while (true) {
        char c = v[0][num];

        for (string str : v) {
            if (c != str[num])
                return v[0].substr(0, num);
        }
        num++;
    }
}