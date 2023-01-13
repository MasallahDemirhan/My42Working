#ifndef ANIMALS_HPP
#define ANIMALS_HPP

#include <iostream>

using std::string;
using std::endl;
using std::cout;

class Animal
{
protected:
    string type;
public:
    Animal();
    Animal& operator=(const Animal& obj);
    Animal(const Animal& obj);
    virtual ~Animal();

    string getType() const;
    virtual void makeSound() const = 0;
};


#endif