#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

using std::string;
using std::endl;
using std::cout;

class Dog: public Animal
{
private:
    Brain* dogBrain;

public:
    Dog();
    Dog& operator=(const Dog& obj);
    Dog(const Dog& obj);
    ~Dog();

    void makeSound() const;
    string  getType() const;
};


#endif