#pragma once

#include <iostream>

#include "ICharacter.hpp"

using   std::string;
using   std::endl;
using   std::cout;

class AMateria
{
protected:
    string type;
public:
	AMateria();
	AMateria ( const AMateria &ama );
	virtual ~AMateria ( void );
    AMateria (std::string const &type );
    AMateria &operator = ( const AMateria &a );

	virtual std::string  const &getType() const;
	virtual  AMateria* clone() const = 0;
	virtual void use ( ICharacter &target );
};
