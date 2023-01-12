#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

using std::endl;
using std::string;
using std::cout;


class ClapTrap
{


private:
    string _name;
    int    _hitPoint;
    int    _energyPoint;
    int    _attackDamage;

public:

    ClapTrap();
    ClapTrap(string name);
    ClapTrap(const ClapTrap &obj);
    ClapTrap& operator=(const ClapTrap& obj);
    ~ClapTrap();

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    int getHit();
    int getEnergy();
    string getName();
    int getDamage();
};



#endif