#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

using std::string;
using std::endl;
using std::cout;

class Dog: public Animal
{
public:
    Dog();
    Dog(string type);
    Dog& operator=(const Dog& obj);
    Dog(const Dog& obj);
    ~Dog();

    void makeSound() const;
};


#endif