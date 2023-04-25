#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

class Warlock {

public:

Warlock(const std::string& name, const std::string& title);
~Warlock();

const std::string&  getName() const;
const std::string&  getTitle() const;
void                introduce() const;
void                setTitle(const std::string& title);

void	learnSpell(const ASpell* spell);
void	forgetSpell(const std::string& spell);
void	launchSpell(const std::string& spell, const ATarget& target);


private:

std::string _name;
std::string _title;

SpellBook	_sb;

Warlock();
Warlock(const Warlock& src);
Warlock&  operator=(const Warlock& rhs);

};

#endif

