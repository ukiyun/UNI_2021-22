#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

double average(const string& fname){
    ifstream in(fname);
    double counter = 0;
    double sadd = 0;
    double num = 0;

    while(!in.eof()){
        if(in>>num){
            sadd += num;
            counter++;
        }else{
            in.clear();
            in.ignore(1);
        }
    }

    return sadd/counter;

}