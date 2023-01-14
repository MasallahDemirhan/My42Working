#pragma once

#include "AMateria.hpp"


class Cure: public AMateria
{
public:
    Cure();
    Cure& operator=(const Cure& cure);
    Cure(const Cure& cure);
    AMateria* clone() const;
    void use(ICharacter& target);
    ~Cure();
};
