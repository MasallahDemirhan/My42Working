#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("WrongAnimal")
{
    cout << "WrongAnimal default constructor called." << endl;
}

WrongAnimal::WrongAnimal(string type): type(type)
{
    cout << "WrongAnimal string " << type << " constructor called." << endl;     
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj): type(obj.type)
{
    cout << "WrongAnimal copy constructor called on " << obj.type << endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj)
{
    this->type = obj.type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    cout << "WrongAnimal destructor called for " << type << endl;
}

void WrongAnimal::makeSound() const
{
    cout << "WrongAnimal default sound." <<endl;
}

string WrongAnimal::getType() const
{
    return (this->type);
}