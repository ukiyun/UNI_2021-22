#include <iostream>
#include "Operation.h"
using namespace std;


class Sum: public Operation{
    public:
        Sum(int a, int b): Operation(a,b) {}
        int operation() const{
            return(get_op1() + get_op2());
        }
};


class Power: public Operation{
    public:
        Power(int a, int b): Operation(a,b) {}
        int operation() const{
            int base= get_op1();
            int exponent = get_op2();
            int total = 1;
            for (int i = 0; i<exponent; i++){
                total *= base;
            }
            return total;
        }
            
};