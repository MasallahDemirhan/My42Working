#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
    cout << "Cure default constructor called." << endl;
}

Cure& Cure::operator=(const Cure& cure)
{
    this->type = cure.getType();
    return (*this);
}

Cure::Cure(const Cure& cure): AMateria(cure)
{
    cout << "Cure copy constructor called." << endl;
}

AMateria* Cure::clone() const
{
    Cure *cln = new Cure();
    return (cln);
}

void Cure::use(ICharacter& target)
{
    cout << "* heals " << target.getName() <<"\'s wounds *" << endl;
}

Cure::~Cure()
{
    cout << "Cure destructor called." << endl;
}