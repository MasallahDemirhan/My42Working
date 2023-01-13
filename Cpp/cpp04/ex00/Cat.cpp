#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
    cout << "Cat default constructor called." << endl;
}

Cat::Cat(string type): Animal(type)
{
    cout << "Cat string " << type << " constructor called." << endl;     
}

Cat::Cat(const Cat& obj): Animal(obj.type)
{
    cout << "Cat copy constructor called on " << obj.type << endl;
    *this = obj;
}

Cat& Cat::operator=(const Cat& obj)
{
    this->type = obj.type;
    return (*this);
}

Cat::~Cat()
{
    cout << "Cat destructor called for " << type << endl;
}

void Cat::makeSound() const
{
    cout << "Miyavvv" <<endl;
}

