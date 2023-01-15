#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
    cout << "Ice default constructor called." << endl;
}

Ice& Ice::operator=(const Ice& cure)
{
    this->type = cure.getType();
    return (*this);
}

Ice::Ice(const Ice& ice): AMateria(ice)
{
    cout << "Ice copy constructor called." << endl;
}

AMateria* Ice::clone() const
{
    Ice *ice = new Ice();
    return (ice);
}

void Ice::use(ICharacter& target)
{
    cout << "*  shoots an ice bolt at " << target.getName() <<" *" << endl;
}

Ice::~Ice()
{
    cout << "Ice destructor called." << endl;
}