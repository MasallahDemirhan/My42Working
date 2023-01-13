#include "Dog.hpp"

Dog::Dog()
{
    cout << "Dog default constructor called." << endl;
    type = "Dog";
    dogBrain = new Brain();
}

Dog::Dog(const Dog& obj)
{
    cout << "Dog copy constructor called on " << endl;
    *this = obj;
}

Dog& Dog::operator=(const Dog& obj)
{
    this->type = obj.type;
    return (*this);
}

Dog::~Dog()
{
    cout << "Dog destructor called for " << type << endl;
    delete (dogBrain);
}

void Dog::makeSound() const
{
    cout << "Havv" <<endl;
}

string Dog::getType() const
{
    return (this->type);
}