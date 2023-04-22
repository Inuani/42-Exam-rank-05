#include <iostream>
#include <map>
#include "ASpell.hpp"

#ifndef FIREBALL_HPP
# define FIREBALL_HPP

class Fireball : public ASpell {

public:

Fireball();
~Fireball();
Fireball(const Fireball& src);

Fireball&  operator=(const Fireball& rhs);

ASpell* clone() const;

private:

};

#endif

