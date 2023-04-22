#include "Warlock.hpp"
#include "Dummy.hpp"
#include "Fwoosh.hpp"
#include "Polymorph.hpp"
#include "Fireball.hpp"
#include "TargetGenerator.hpp"
#include "BrickWall.hpp"


// c++ -std=c++98 -Werror -Wextra -Wall main.cpp Warlock.cpp ASpell.cpp ATarget.cpp Fwoosh.cpp Dummy.cpp Polymorph.cpp Targetgenerator.cpp SpellBook.cpp Fireball.cpp BrickWall.cpp

int main()
{
  Warlock richard("Richard", "foo");
  richard.setTitle("Hello, I'm Richard the Warlock!");
  BrickWall model1;

  Polymorph* polymorph = new Polymorph();
  TargetGenerator tarGen;

  tarGen.learnTargetType(&model1);
  richard.learnSpell(polymorph);

  Fireball* fireball = new Fireball();

  richard.learnSpell(fireball);

  ATarget* wall = tarGen.createTarget("Inconspicuous Red-brick Wall");

  richard.introduce();
  richard.launchSpell("Polymorph", *wall);
  richard.launchSpell("Fireball", *wall);

  delete polymorph;
  delete fireball;
  delete wall;
}