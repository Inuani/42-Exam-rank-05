#include <iostream>
#include "Warlock.hpp"
#include <map>


Warlock::Warlock(const std::string& name, const std::string& title) : _name(name), _title(title) {
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
	std::cout << _name << ": My job here is done!" << std::endl;
}

Warlock::Warlock() {}

Warlock::Warlock(const Warlock& src){
	*this = src;
}

Warlock&	Warlock::operator=(const Warlock& rhs) {
	if (this != &rhs){
		_name = rhs._name;
		_title = rhs._title;
	}
	return *this;
}

const std::string&	Warlock::getName() const {
	return	_name;
}

const std::string&	Warlock::getTitle() const {
	return _title;
}

void	Warlock::setTitle(const std::string& title) {
	_title = title;
}

void	Warlock::introduce() const {
	std::cout << _name << ": I am "<< _name << ", " << _title <<"!" << std::endl;
}

void	Warlock::learnSpell(const ASpell* spell) {
	std::map<std::string, ASpell *>::iterator itS = _magic.begin();
	std::map<std::string, ASpell *>::iterator itE = _magic.end();

	if (spell) {
		while (itS != itE)
		{
			if (itS->first == spell->getName())
				return;
			++itS;
		}
		_magic[spell->getName()] = spell->clone();
	}
	// SIMPLIFIED
	// if (spell) {
	// 	if (_magic.find(spell->getName()) == _magic.end())
	// 		_magic[spell->getName()] = spell->clone();
	// }
}


void	Warlock::forgetSpell(const std::string& spell) {

	std::map<std::string, ASpell *>::iterator itS = _magic.begin();
	std::map<std::string, ASpell *>::iterator itE = _magic.end();
	while (itS != itE)
	{
		if (itS->first == spell) {
			delete itS->second;
			_magic.erase(itS);
			break;
		}
		++itS;
	}
	// SIMPLIFIED
	// std::map<std::string, ASpell *>::iterator it = _magic.find(spell);
	// if (it != _magic.end()) {
	// 	delete it->second;
	// 	_magic.erase(it);
	// }
}

void	Warlock::launchSpell(const std::string& spell, const ATarget& target) {
	std::map<std::string, ASpell *>::iterator itS = _magic.begin();
	std::map<std::string, ASpell *>::iterator itE = _magic.end();
	while (itS != itE) {
		if (itS->first == spell) {
			itS->second->launch(target);
			return;
		}
		++itS;
	}
}

