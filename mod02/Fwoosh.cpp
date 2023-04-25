
#include <iostream>
#include <map>
#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "Fwooshed") {
}

Fwoosh::~Fwoosh()  {   
}

Fwoosh::Fwoosh(const Fwoosh& src) : ASpell(src) {
}

Fwoosh&  Fwoosh::operator=(const Fwoosh& rhs){
    _name = rhs._name;
    _effects = rhs._effects;
    return *this;
}

ASpell* Fwoosh::clone() const {
    return new Fwoosh();
}

