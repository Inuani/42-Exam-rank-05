#include <iostream>
#include "ASpell.hpp"

#ifndef FWOOSH_HPP
# define FWOOSH_HPP

class Fwoosh : public ASpell {

public:

	Fwoosh();
	~Fwoosh();
	Fwoosh(const Fwoosh& src);

	Fwoosh&	operator=(const Fwoosh& rhs);

	ASpell*	clone() const;

private:

};

#endif
