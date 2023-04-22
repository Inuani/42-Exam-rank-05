#include <iostream>
#include <map>

#ifndef DUMMY_HPP
# define DUMMY_HPP

class Dummy {

public:

Dummy();
~Dummy();
Dummy(const Dummy& src);

Dummy&  operator=(const Dummy& rhs);

private:

};

#endif

