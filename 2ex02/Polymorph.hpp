#include <iostream>
#include <map>
#include "ASpell.hpp"

#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

class Polymorph : public ASpell {

public:

Polymorph();
~Polymorph();
Polymorph(const Polymorph& src);

Polymorph&  operator=(const Polymorph& rhs);

ASpell* clone() const;


private:

};

#endif

