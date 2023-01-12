#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

using std::endl;
using std::string;
using std::cout; 

class FragTrap : virtual public ClapTrap
{

public:
    FragTrap();
    FragTrap(string name);
    FragTrap(const FragTrap& obj);
    FragTrap& operator=(const FragTrap&  obj);
    ~FragTrap();

    void highFivesGuys(void);
};


#endif