#ifndef DIAMOND_HPP
#define DIAMOND_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    string _name;
public:
    DiamondTrap();
    DiamondTrap(string name);
    DiamondTrap(const DiamondTrap& obj);
    DiamondTrap& operator=(const DiamondTrap& obj);
    ~DiamondTrap();

    void whoAmI();
};


#endif