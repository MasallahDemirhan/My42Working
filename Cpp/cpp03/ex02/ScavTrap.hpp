#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{

public:
    ScavTrap();
    ScavTrap(const ScavTrap& obj);
    ScavTrap& operator=(const ScavTrap& obj);
    ScavTrap(string name);
    ~ScavTrap();

    void guardGate();
    void attack(const std::string& target);
};


#endif