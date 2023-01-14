#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character: public ICharacter
{
private:
	string _name;
	AMateria* _materia[4];

public:
    Character(string const &name);
    Character(const Character& character);
    Character& operator=(const Character& character);
    ~Character();

    string const& getName() const;
	void equip(AMateria* materia);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

