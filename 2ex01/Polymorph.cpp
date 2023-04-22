
#include <iostream>
#include <map>
#include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter") {
}

Polymorph::~Polymorph()  {   
}

Polymorph::Polymorph(const Polymorph& src) : ASpell(src) {
    *this = src;
}

Polymorph&  Polymorph::operator=(const Polymorph& rhs){
    (void)rhs;
    return *this;
}

ASpell* Polymorph::clone() const {
    return new Polymorph();
}


