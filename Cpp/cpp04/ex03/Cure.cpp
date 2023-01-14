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

Cure::Cure(const Cure& cure)
{
    if (this != &cure)
    {
        this->type = cure.getType();
    }
}

AMateria* AMateria::clone() const
{
    return new Cure(*this);
}