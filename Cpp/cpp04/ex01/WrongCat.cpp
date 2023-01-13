#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
    cout << "WrongCat default constructor called." << endl;
}

WrongCat::WrongCat(string type): WrongAnimal(type)
{
    cout << "WrongCat string " << type << " constructor called." << endl;     
}

WrongCat::WrongCat(const WrongCat& obj): WrongAnimal(obj.type)
{
    cout << "WrongCat copy constructor called on " << obj.type << endl;
}

WrongCat& WrongCat::operator=(const WrongCat& obj)
{
    this->type = obj.type;
    return (*this);
}

WrongCat::~WrongCat()
{
    cout << "WrongCat destructor called for " << type << endl;
}

void WrongCat::makeSound() const
{
    cout << "Miyavvv" <<endl;
}
