#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
    cout << "Dog default constructor called." << endl;
}

Dog::Dog(string type): Animal(type)
{
    cout << "Dog string " << type << " constructor called." << endl;     
}

Dog::Dog(const Dog& obj): Animal(obj.type)
{
    cout << "Dog copy constructor called on " << obj.type << endl;
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
}

void Dog::makeSound() const
{
    cout << "Havv" <<endl;
}