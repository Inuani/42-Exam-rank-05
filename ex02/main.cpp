#include "Warlock.hpp"
#include "ASpell.hpp"
#include "Warlock.hpp"
#include "Fwoosh.hpp"
#include "ATarget.hpp"
#include "Dummy.hpp"


// c++ -std=c++98 -Werror -Wextra -Wall main.cpp Warlock.cpp ASpell.cpp ATarget.cpp Fwoosh.cpp Dummy.cpp Fireball.cpp BrickWall.cpp Polymorph.cpp SpellBook.cpp TargetGenerator.cpp

int main()
{
	Warlock richard("Richard", "the Titled");

	Dummy bob;
	Fwoosh* fwoosh = new Fwoosh();

	richard.learnSpell(fwoosh);

	richard.introduce();
	richard.launchSpell("Fwoosh", bob);

	richard.forgetSpell("Fwoosh");
	richard.launchSpell("Fwoosh", bob);
	
	delete fwoosh;
}