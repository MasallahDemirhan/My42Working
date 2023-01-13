#include "Animal.hpp"

Animal::Animal(): type("Animal")
{
    cout << "Animal default constructor called." << endl;
}

Animal::Animal(string type): type(type)
{
    cout << "Animal string " << type << " constructor called." << endl;     
}

Animal::Animal(const Animal& obj): type(obj.type)
{
    cout << "Animal copy constructor called on " << obj.type << endl;
    *this = obj;
}

Animal& Animal::operator=(const Animal& obj)
{
    this->type = obj.type;
    return (*this);
}

Animal::~Animal()
{
    cout << "Animal destructor called for " << type << endl;
}

void Animal::makeSound() const
{
    cout << "Animal default sound." <<endl;
}

string Animal::getType() const
{
    return (this->type);
}
