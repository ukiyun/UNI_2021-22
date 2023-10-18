/* implement member functions of same name header */

#include "Date.h"

Date::Date(): year_(1), month_(1), day_(1){}

Date::Date(int year, int month, int day): year_(year), month_(month), day_(day) {}

bool Date::is_before(const Date& date) const{
    if (year_<date.year_){
        return true;
    }else if (year_ > date.year_){
        return false;
    }else{
        if (month_<date.month_){
            return true;
        }else if (month_>date.month_){
            return false;
        }else{
            if (day_ < date.day_){
                return true;
            }else{
                return false;
            }
        }
    }
}