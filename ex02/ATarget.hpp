#include <iostream>
#include "ASpell.hpp"

#ifndef ATARGET_HPP
# define ATARGET_HPP

class ATarget {

public:

	ATarget();
	ATarget(const std::string& type);
	virtual ~ATarget();
	ATarget(const ATarget& src);

	ATarget&	operator=(const ATarget& rhs);
	const std::string&	getType() const;
	void	getHitBySpell(const ASpell& spell) const ;

	virtual ATarget* clone() const = 0;

private:

	std::string	_type;

};

#endif
