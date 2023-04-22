
#include <iostream>
#include <map>
#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){
}

TargetGenerator::~TargetGenerator() {
    std::map<std::string, ATarget *>::iterator itS = _targets.begin();
    std::map<std::string, ATarget *>::iterator itE = _targets.end();
    while (itS != itE) {
        delete itS->second;
        itS++;
    }
}

TargetGenerator::TargetGenerator(const TargetGenerator& src){
    *this = src;
}

TargetGenerator&  TargetGenerator::operator=(const TargetGenerator& rhs){
    _targets = rhs._targets;
    return *this;
}

void		TargetGenerator::learnTargetType(const ATarget* target) {
    if (target) {
        std::map<std::string, ATarget *>::iterator it = _targets.find(target->getType());
        if (it == _targets.end()) {
            _targets[target->getType()] = target->clone();
        }
    }
}

void		TargetGenerator::forgetTargetType(std::string const & target) {
    std::map<std::string, ATarget *>::iterator it = _targets.find(target);
    if (it != _targets.end()) {
        delete it->second;
        _targets.erase(target);
    }
}

ATarget*	TargetGenerator::createTarget(std::string const & target)  {
    std::map<std::string, ATarget *>::iterator it = _targets.find(target);
    if (it != _targets.end()) {
        return it->second->clone();
    }
    return NULL;
}

