#include <iostream>
#include "ATarget.hpp"

#ifndef DUMMY_HPP
# define DUMMY_HPP

class Dummy : public ATarget {

public:

	Dummy();
	~Dummy();
	Dummy(const Dummy& src);

	Dummy&	operator=(const Dummy& rhs);

	ATarget* clone() const;

private:

};

#endif
