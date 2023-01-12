#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

using std::endl;
using std::string;
using std::cout;


class ClapTrap
{


protected:
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
    void setHit(int hit);
    void setEnergy(int energy);
    void setName(string name);
    void setDamage(int damage);
    int getHit();
    int getEnergy();
    string getName();
    int getDamage();
};



#endif