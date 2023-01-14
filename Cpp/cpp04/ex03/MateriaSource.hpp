#pragma once

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
    Amateria* _matteria[4];
public:
    MateriaSource();
	MateriaSource(const MateriaSource &materiaSource);
	MateriaSource &operator=(const MateriaSource &materiaSource);

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const& type);

	virtual ~MateriaSource();
};

