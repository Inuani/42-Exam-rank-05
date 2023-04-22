
#include <iostream>
#include <map>
#include "Fireball.hpp"

Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp") {
}

Fireball::~Fireball() {   
}

Fireball::Fireball(const Fireball& src) : ASpell(src) {
    *this = src;
}

Fireball&  Fireball::operator=(const Fireball& rhs){
    (void)rhs;
    return *this;
}

ASpell* Fireball::clone() const {
    return new Fireball();
}

