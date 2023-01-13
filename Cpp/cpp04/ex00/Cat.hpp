#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

using std::string;
using std::endl;
using std::cout;

class Cat : public Animal
{
public:
    Cat();
    Cat(string type);
    Cat& operator=(const Cat& obj);
    Cat(const Cat& obj);
    ~Cat();

    void makeSound() const;
};


#endif