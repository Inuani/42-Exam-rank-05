
#include <iostream>
#include <map>
#include "Warlock.hpp"

Warlock::Warlock() {
}

Warlock::Warlock(const std::string& name, const std::string& title)
    : _name(name) , _title(title) {
    std::cout << _name << ": This looks like another boring day." << std::endl;
}


Warlock::~Warlock() {
    std::cout << _name << ": My job here is done!" << std::endl;
    std::map<std::string, ASpell *>::iterator it = _magic.begin();
    while (it != _magic.end()) {
        delete it->second;
        it++;
    }

}

Warlock::Warlock(const Warlock& src){
    *this = src;
}

Warlock&  Warlock::operator=(const Warlock& rhs){
    _name = rhs._name;
    _title = rhs._title;
    return *this;
}

const std::string&  Warlock::getName() const {
    return _name;
}

const std::string&  Warlock::getTitle() const {
    return _title;
}

void               Warlock::introduce() const {
    std::cout << _name << ": I am " << _name << ", " << _title << std::endl;
}

void    Warlock::setTitle(const std::string& title) {
    _title = title;
}

void	Warlock::learnSpell(const ASpell* spell) {
    if (spell) {
        if (_magic.find(spell->getName()) == _magic.end())
            _magic[spell->getName()] = spell->clone();
    }
}

void	Warlock::forgetSpell(const std::string& spell) {
    std::map<std::string, ASpell*>::iterator it = _magic.find(spell);
    if (it != _magic.end()) {
        delete it->second;
        _magic.erase(spell);
    }
}

void	Warlock::launchSpell(const std::string& spell, const ATarget& target) {
    std::map<std::string, ASpell*>::iterator it = _magic.find(spell);
    if (it != _magic.end()) {
        it->second->launch(target);
    }
}

