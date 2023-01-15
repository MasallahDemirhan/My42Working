#pragma once

#include "AMateria.hpp"

class Ice: public AMateria
{
public:
    Ice();
    Ice& operator=(const Ice& Ice);
    Ice(const Ice& ice);
    AMateria* clone() const;
    void use(ICharacter& target);
    ~Ice();
};
