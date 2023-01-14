#include "AMateria.hpp"

AMateria::AMateria(): type("")
{
    cout << "AMateria default constructor called." << endl;
}

AMateria::AMateria ( const AMateria &ama )
{
    *this = ama;
}

AMateria::AMateria (std::string const &type ): type(type)
{
    cout << "AMateria string constructor called." << endl;
}

AMateria& AMateria::operator = ( const AMateria &a )
{
    this->type = a.type;
    return (*this); 
}

string const& AMateria::getType() const {  return type; }

AMateria::~AMateria()
{
    cout << "AMateria destructor." << endl;
}

void AMateria::use ( ICharacter &target )
{
    cout << "Matreia used on target " << target.getName() << endl;
}