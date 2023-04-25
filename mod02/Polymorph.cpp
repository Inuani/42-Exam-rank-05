
#include <iostream>
#include <map>
#include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter") {
}

Polymorph::~Polymorph()  {   
}

Polymorph::Polymorph(const Polymorph& src) : ASpell(src) {
}

Polymorph&  Polymorph::operator=(const Polymorph& rhs){
    _name = rhs._name;
    _effects = rhs._effects;
    return *this;
}

ASpell* Polymorph::clone() const {
    return new Polymorph();
}


