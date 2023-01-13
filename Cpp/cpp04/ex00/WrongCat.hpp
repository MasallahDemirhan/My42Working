#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

using std::string;
using std::endl;
using std::cout;

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(string type);
    WrongCat& operator=(const WrongCat& obj);
    WrongCat(const WrongCat& obj);
    ~WrongCat();

    void makeSound() const;
};


#endif