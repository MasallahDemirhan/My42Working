#ifndef WRONGANIMALS_HPP
#define WRONGANIMALS_HPP

#include <iostream>

using std::string;
using std::endl;
using std::cout;

class WrongAnimal
{
protected:
    string type;
public:
    WrongAnimal();
    WrongAnimal(string type);
    WrongAnimal& operator=(const WrongAnimal& obj);
    WrongAnimal(const WrongAnimal& obj);
    virtual ~WrongAnimal();

    string getType() const;
    void makeSound() const;
};


#endif