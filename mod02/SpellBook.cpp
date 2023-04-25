
#include <iostream>
#include <map>
#include "SpellBook.hpp"

SpellBook::SpellBook(){
}

SpellBook::~SpellBook() {  
    std::map<std::string, ASpell *>::iterator it = _book.begin();
    while (it != _book.end()) {
        delete it->second;
        it++;
    } 
}

SpellBook::SpellBook(const SpellBook& src) {
    *this = src;
}

SpellBook&  SpellBook::operator=(const SpellBook& rhs){
    _book = rhs._book;
    return *this;
}

void		SpellBook::learnSpell(const ASpell* spell) {
    std::map<std::string, ASpell *>::iterator it = _book.find(spell->getName());
    if (spell) {
        if (it == _book.end())
            _book[spell->getName()] = spell->clone();
    }
}

void		SpellBook::forgetSpell(std::string const & spell) {
    std::map<std::string, ASpell *>::iterator it = _book.find(spell);
    if (it != _book.end()) {
        delete it->second;
        _book.erase(spell);
    }
}

ASpell*		SpellBook::createSpell(std::string const & spell) {
    std::map<std::string, ASpell *>::iterator it = _book.find(spell);
    if (it != _book.end())
        return it->second->clone();
    return NULL;
}

