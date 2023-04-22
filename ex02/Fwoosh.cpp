#include <iostream>
#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed"){
}

Fwoosh::~Fwoosh() {
}

Fwoosh::Fwoosh(const Fwoosh& src) : ASpell(src){
	*this = src;
}

Fwoosh&	Fwoosh::operator=(const Fwoosh& rhs){
	(void)rhs;
	return *this;
}

ASpell*	Fwoosh::clone() const {
	return new Fwoosh();
}
