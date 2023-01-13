#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

using std::string;
using std::endl;
using std::cout;

class Brain 
{
private:
    string ideas[100];

public:
    Brain();
    Brain& operator=(const Brain& obj);
    Brain(const Brain& obj);
    ~Brain();

};


#endif