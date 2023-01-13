#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

using std::string;
using std::endl;
using std::cout;

class Cat : public Animal
{
private:
    Brain* catBrain;

public:
    Cat();
    Cat& operator=(const Cat& obj);
    Cat(const Cat& obj);
    ~Cat();

    void makeSound() const;
    string  getType() const;
};


#endif