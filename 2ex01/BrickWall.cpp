
#include <iostream>
#include <map>
#include "BrickWall.hpp"

BrickWall::BrickWall() : ATarget("Inconspicuous Red-brick Wall") {
}

BrickWall::~BrickWall() {   
}

BrickWall::BrickWall(const BrickWall& src) : ATarget(src) {
    *this = src;
}

BrickWall&  BrickWall::operator=(const BrickWall& rhs){
    (void)rhs;
    return *this;
}

ATarget* BrickWall::clone() const {
    return new BrickWall();
}

