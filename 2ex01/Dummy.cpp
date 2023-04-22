
#include <iostream>
#include <map>
#include "Dummy.hpp"

Dummy::Dummy(){
}

Dummy::~Dummy() {   
}

Dummy::Dummy(const Dummy& src){
    *this = src;
}

Dummy&  Dummy::operator=(const Dummy& rhs){
    (void)rhs;
    return *this;
}

