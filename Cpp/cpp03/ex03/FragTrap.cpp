#include "FragTrap.hpp"


FragTrap::FragTrap()
{
    setHit(100);
    setEnergy(100);
    setDamage(30);
    cout << "FragTrap: Default constructor called" << endl;
}

FragTrap::FragTrap(string name)
{
    setName(name);
    setHit(100);
    setEnergy(100);
    setDamage(30);
    cout << name << ": String constructor called" << endl;
}
FragTrap::~FragTrap()
{
    cout << "Destructor called" << endl;
}

FragTrap& FragTrap::operator=(const FragTrap &obj)
{
    this->_name = obj._name;
    this->_energyPoint = obj._energyPoint;
    this->_hitPoint = obj._hitPoint;
    this->_attackDamage = obj._attackDamage;
    return(*this);
}

 FragTrap::FragTrap(const FragTrap& obj)
{
    *this = obj;
    cout << "Copy constructor called" << endl;

}

void FragTrap::highFivesGuys(void)
{
    cout << "FragTrap " << " High fives guys..." << endl;
}