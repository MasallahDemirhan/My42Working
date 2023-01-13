#include "Cat.hpp"

Cat::Cat()
{
    cout << "Cat default constructor called." << endl;
    type = "Cat";
    catBrain = new Brain();
}

Cat::Cat(const Cat& obj)
{
    cout << "Cat copy constructor called on " << endl;
    *this = obj;
}

Cat& Cat::operator=(const Cat& obj)
{
    this->type = obj.type;
    return (*this);
}

Cat::~Cat()
{
    cout << "Cat destructor called for " << endl;
    delete (catBrain);
}

void Cat::makeSound() const
{
    cout << "Miyavvv" <<endl;
}

string Cat::getType() const
{
    return (this->type);
}
