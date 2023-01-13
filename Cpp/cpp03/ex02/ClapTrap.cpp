#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
    cout << "Default constructor called" << endl;
}

ClapTrap::ClapTrap(string name): _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
    cout << _name << ": String constructor called" << endl;
}
ClapTrap::~ClapTrap()
{
    cout << "Destructor called" << endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &obj)
{
    _name = obj._name;
    _energyPoint = obj._energyPoint;
    _hitPoint = obj._hitPoint;
    _attackDamage = obj._attackDamage;
    return(*this);
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
    *this = obj;
    cout << "Copy constructor called" << endl;

}

void ClapTrap::attack(const std::string& target)
{
    if (_hitPoint > 0 && _energyPoint > 0)
    {
        cout << "ClapTrap   " << _name << " attack   " << target << " , cauising  " << _attackDamage << " points of damage!" << endl;
        _energyPoint -= 1;
    }else
    {
        cout << "ClapTrap " << _name << " don't have " << (_energyPoint < 0 ? "energy!" : "hit point!" ) << endl;
    }
    this->takeDamage(_attackDamage);
    
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoint > 0)
    {
       _hitPoint -= amount;
        cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << endl;
    }
    else
    {
        cout << _name << "don't have any hit point!" << endl;
    }
    
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitPoint > 0 && _energyPoint > 0)
    {
        _energyPoint -= 1;
        _hitPoint += amount;
        cout << _name << " repaired " << amount << endl;
    }
    else
    {
        cout << _name << "don't have any energy!" << endl;
    
    }
    
}

void ClapTrap::setHit(int hit) { _hitPoint = hit;}
void ClapTrap::setEnergy(int energy) {_energyPoint = energy;}
void ClapTrap::setName(string name) {_name = name;}
void ClapTrap::setDamage(int damage) {_attackDamage = damage;}
int ClapTrap::getHit() {return (_hitPoint);}
int ClapTrap::getEnergy() {return (_energyPoint);}
string ClapTrap::getName() {return (_name);}
int ClapTrap::getDamage() {return (_attackDamage);}