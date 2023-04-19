#include <iostream>
#include "SpellBook.hpp"
#include <map>

SpellBook::SpellBook() {
}

SpellBook::~SpellBook() {
	std::map<std::string, ASpell *>::iterator itS = _magic.begin();
	std::map<std::string, ASpell *>::iterator itE = _magic.end();

	while (itS != itE) {
		delete itS->second;
		++itS;
	}
}

SpellBook::SpellBook(const SpellBook& src) {
	*this = src;
}

SpellBook&	SpellBook::operator=(const SpellBook& rhs){
	_magic = rhs._magic;
	return *this;
}

void		SpellBook::forgetSpell(const std::string& spell) {
	std::map<std::string, ASpell *>::iterator itS = _magic.begin();
	std::map<std::string, ASpell *>::iterator itE = _magic.end();
	while (itS != itE) {
		if (spell == itS->first) {
			delete itS->second;
			_magic.erase(itS);
			return ;
		}
		++itS;
	}
}

ASpell*		SpellBook::createSpell(const std::string& spell) {
	std::map<std::string, ASpell *>::iterator it = _magic.find(spell);

	if (it != _magic.end()) {
		return it->second->clone();
	}
	return NULL;
}

void 		SpellBook::learnSpell(const ASpell * spell) {
	std::map<std::string, ASpell *>::iterator itS = _magic.begin();
	std::map<std::string, ASpell *>::iterator itE = _magic.end();

	if (spell) {
		while (itS != itE) {
			if (itS->first == spell->getName())
				return;
			itS++;
		}
		_magic[spell->getName()] = spell->clone();
	}
}
