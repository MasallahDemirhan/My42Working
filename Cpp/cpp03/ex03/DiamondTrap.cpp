#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap()
{
    ClapTrap::setName("DiamondTrap ");
    FragTrap::setHit(100);
    ScavTrap::setEnergy(50);
    FragTrap::setDamage(30);
    cout << "DiamondTrap: Default constructor called" << endl;
}

DiamondTrap::DiamondTrap(string name)
{
    _name = name;
    ClapTrap::setName(_name + "_clap_name");
    FragTrap::setHit(100);
    ScavTrap::setEnergy(50);
    FragTrap::setDamage(30);
    cout << name << ": String constructor called" << endl;
}
DiamondTrap::~DiamondTrap()
{
    cout << "Destructor called" << endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &obj)
{
    this->_name = obj._name;
    this->_energyPoint = obj._energyPoint;
    this->_hitPoint = obj._hitPoint;
    this->_attackDamage = obj._attackDamage;
    return(*this);
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj)
{
    *this = obj;
    cout << "Copy constructor called" << endl;

}

void DiamondTrap::whoAmI() { cout << "DiamondTrap " << _name << " is actually ClapTrap " << ClapTrap::_name << endl; }