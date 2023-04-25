
#include <iostream>
#include <map>
#include "BrickWall.hpp"

BrickWall::BrickWall() : ATarget("Inconspicuous Red-brick Wall") {
}

BrickWall::~BrickWall() {   
}

BrickWall::BrickWall(const BrickWall& src) : ATarget(src) {
}

BrickWall&  BrickWall::operator=(const BrickWall& rhs){
    _type = rhs._type;
    return *this;
}

ATarget* BrickWall::clone() const {
    return new BrickWall();
}

