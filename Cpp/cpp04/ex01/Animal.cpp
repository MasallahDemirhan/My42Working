#include "Animal.hpp"

Animal::Animal()
{
    cout << "Animal default constructor called." << endl;
    type = "Animal";
}

Animal::Animal(const Animal& obj)
{
    cout << "Animal copy constructor called on " << endl;
    *this = obj;
}

Animal& Animal::operator=(const Animal& obj)
{
    this->type = obj.type;
    return (*this);
}

Animal::~Animal()
{
    cout << "Animal destructor called for " << endl;
}

void Animal::makeSound() const
{
    cout << "Animal default sound." <<endl;
}

string Animal::getType() const
{
    return (this->type);
}
