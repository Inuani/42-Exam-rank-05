
#include <iostream>
#include <map>
#include "Fireball.hpp"

Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp") {
}

Fireball::~Fireball() {   
}

Fireball::Fireball(const Fireball& src) : ASpell(src) {
}

Fireball&  Fireball::operator=(const Fireball& rhs){
    _name = rhs._name;
    _effects = rhs._effects;
    return *this;
}

ASpell* Fireball::clone() const {
    return new Fireball();
}

