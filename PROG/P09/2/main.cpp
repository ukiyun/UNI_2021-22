#include <iostream>
#include <vector>
#include "Date.h"
#include "Person.h"

using namespace std;

// persons born before date
void born_before(const vector<Person>& persons, const Date& date) {
    date.show();
    std::cout<< ": ";
    for (size_t i = 0; i < persons.size(); i++){
        if(persons[i].get_birth_date().is_before(date)){
            persons[i].show();
            std::cout<< " ";
        }
    }    
}
