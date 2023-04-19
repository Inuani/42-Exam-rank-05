#include <iostream>
#include "ATarget.hpp"
#include <map>

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

	TargetGenerator(const TargetGenerator& src);
	TargetGenerator&	operator=(const TargetGenerator& rhs);

	std::map<std::string, ATarget*> _targets;

};

#endif
