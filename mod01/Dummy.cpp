
#include <iostream>
#include <map>
#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy") {
}

Dummy::~Dummy() {   
}

Dummy::Dummy(const Dummy& src) : ATarget(src) {
}

Dummy&  Dummy::operator=(const Dummy& rhs){
    _type = rhs._type;
    return *this;
}

ATarget* Dummy::clone() const {
    return new Dummy();
}


