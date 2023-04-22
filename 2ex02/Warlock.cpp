
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
        _sb.learnSpell(spell);
    }
}

void	Warlock::forgetSpell(const std::string& spell) {
    _sb.forgetSpell(spell);
}

void	Warlock::launchSpell(const std::string& spell, const ATarget& target) {
    ASpell *  tmp = _sb.createSpell(spell);
    if (tmp) {
        tmp->launch(target);
        delete tmp;
    }
}

