#include <iostream>
#include "ASpell.hpp"
#include <map>

#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

class SpellBook {

public:

	SpellBook();
	~SpellBook();
	void		forgetSpell(const std::string& spell);
	ASpell*		createSpell(const std::string& spell);
	void 		learnSpell(const ASpell * spell);

private:

	SpellBook(const SpellBook& src);
	SpellBook&	operator=(const SpellBook& rhs);

	std::map<std::string, ASpell*> _magic;

};

#endif
