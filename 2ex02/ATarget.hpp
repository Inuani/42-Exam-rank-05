#include <iostream>
#include <map>
#include "ASpell.hpp"

#ifndef ATARGET_HPP
# define ATARGET_HPP

class ATarget {

public:

ATarget();
virtual ~ATarget();
ATarget(const ATarget& src);

ATarget&  operator=(const ATarget& rhs);

ATarget(const std::string& type);

const std::string&  getType() const;

void    getHitBySpell(const ASpell& spell) const ;

virtual ATarget*    clone() const = 0;

protected:

std::string	_type;

};

#endif

