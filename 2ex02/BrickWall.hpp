#include <iostream>
#include <map>
#include "ATarget.hpp"

#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

class BrickWall : public ATarget{

public:

BrickWall();
~BrickWall();
BrickWall(const BrickWall& src);

BrickWall&  operator=(const BrickWall& rhs);

ATarget* clone() const;

private:

};

#endif

