#include <iostream>
#include <map>
#include "ASpell.hpp"

#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

class SpellBook {

public:

SpellBook();
~SpellBook();

void		learnSpell(const ASpell* spell);
void		forgetSpell(std::string const & spell);
ASpell*		createSpell(std::string const & spell);

private:

std::map<std::string, ASpell*> _book;

SpellBook(const SpellBook& src);
SpellBook&  operator=(const SpellBook& rhs);


};

#endif

