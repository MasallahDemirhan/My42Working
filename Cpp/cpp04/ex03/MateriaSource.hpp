#pragma once

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
    AMateria* _matteria[4];
public:
    MateriaSource();
	MateriaSource(const MateriaSource &materiaSource);
	MateriaSource &operator=(const MateriaSource &materiaSource);

	void learnMateria(AMateria* learn);
	AMateria* createMateria(std::string const& type);

	virtual ~MateriaSource();
};

