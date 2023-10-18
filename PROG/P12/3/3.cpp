#include <iostream>
#include <iomanip>
#include "Piece.h"
#include "Domino.h"


bool Piece::can_be_left_to(const Piece& other) const{
    if (right_== other.left_){
        return true;
    }else{
        return false;
    }
}

bool Piece::can_be_right_to(const Piece& other) const{
    if (other.right_ == left_){
        return true;
    }else{
        return false;
    }    
}


const Piece& Domino::left() const{
    return pieces_.front();
}


const Piece& Domino::right() const{
    return pieces_.back();
}




bool Domino::place_left(const Piece& p){
    if(left().can_be_right_to(p)){
        pieces_.push_front(p);
        return true;
    }else{
        return false;
    }

}


bool Domino::place_right(const Piece& p){
    if(right().can_be_left_to(p)){
        pieces_.push_back(p);
        return true;
    }else{
        return false;
    }

}