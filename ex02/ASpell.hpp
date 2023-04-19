#include <iostream>

#ifndef ASPELL_HPP
# define ASPELL_HPP

class ATarget;

class ASpell {

public:

	ASpell();
	ASpell(const std::string& name, const std::string& effects);
	virtual ~ASpell();
	ASpell(const ASpell& src);

	ASpell&	operator=(const ASpell& rhs);

	const std::string&	getName() const;
	const std::string&	getEffects() const;

	virtual ASpell*	clone() const = 0;

	void	launch(const ATarget& target) const;
	
private:

	std::string	_name;
	std::string	_effects;

};

#endif