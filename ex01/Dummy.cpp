#include <iostream>
#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy") {
}

Dummy::~Dummy() {
}

Dummy::Dummy(const Dummy& src) {
	*this = src;
}

Dummy&	Dummy::operator=(const Dummy& rhs){
	(void)rhs;
	return *this;
}

ATarget* Dummy::clone() const {
	return new Dummy();
}
