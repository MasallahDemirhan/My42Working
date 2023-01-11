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
    int    _attackDamege;

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
    void setDamege(int damege);
    int getHit();
    int getEnergy();
    string getName();
    int getDamege();
};



#endif