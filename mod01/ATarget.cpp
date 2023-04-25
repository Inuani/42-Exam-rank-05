
#include <iostream>
#include <map>
#include "ATarget.hpp"

ATarget::ATarget(){
}

ATarget::~ATarget() {   
}

ATarget::ATarget(const ATarget& src){
    *this = src;
}

ATarget&  ATarget::operator=(const ATarget& rhs){
    _type = rhs._type;
    return *this;
}

ATarget::ATarget(const std::string& type)
    : _type(type) {

}

const std::string&  ATarget::getType() const {
    return _type;
}

void    ATarget::getHitBySpell(const ASpell& spell) const {
    std::cout << _type << " has been " << spell.getEffects()<<"!" << std::endl;
}

