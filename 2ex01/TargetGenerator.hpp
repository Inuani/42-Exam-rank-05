#include <iostream>
#include <map>
#include "ATarget.hpp"

#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

class TargetGenerator {

public:

TargetGenerator();
~TargetGenerator();

void		learnTargetType(const ATarget* target);
void		forgetTargetType(std::string const & target);
ATarget*	createTarget(std::string const & target);

private:

std::map<std::string, ATarget*>	_targets;

TargetGenerator(const TargetGenerator& src);
TargetGenerator&  operator=(const TargetGenerator& rhs);

};

#endif

