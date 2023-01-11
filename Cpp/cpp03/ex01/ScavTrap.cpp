#include "ScavTrap.hpp"

#include <iostream>

ScavTrap::ScavTrap()
{
    setHit(100);
    setEnergy(50);
    setDamege(20);
    cout << "Default constructor called" << endl;
}

ScavTrap::ScavTrap(string name)
{
    setName(name);
    setHit(100);
    setEnergy(50);
    setDamege(20);
    cout << name << ": String constructor called" << endl;
}
ScavTrap::~ScavTrap()
{
    cout << "Destructor called" << endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &obj)
{
    this->_name = obj._name;
    this->_energyPoint = obj._energyPoint;
    this->_hitPoint = obj._hitPoint;
    this->_attackDamege = obj._attackDamege;
    return(*this);
}

 ScavTrap::ScavTrap(const ScavTrap& obj)
{
    *this = obj;
    cout << "Copy constructor called" << endl;

}

void ScavTrap::attack(const std::string& target)
{
    if (_hitPoint > 0 && _energyPoint > 0)
    {
        cout << "ScavTrap   " << _name << " attack   " << target << " , cauising  " << _attackDamege << " points of damage!" << endl;
        _energyPoint -= 1;
    }else
    {
        cout << "ClapTrap " << _name << " don't have " << (_energyPoint < 0 ? "energy!" : "hit point!" ) << endl;
    }
    
    
}

void ScavTrap::guardGate()
{
    cout << "ScavTrap " << this->_name << " has entered Gate keeper mode!" << endl;
}

