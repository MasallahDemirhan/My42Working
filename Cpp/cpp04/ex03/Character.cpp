#include "Character.hpp"

Character::Character(string const &name): _name(name)
{
    cout << "Character string constructor." << endl;
}

Character::Character(const Character& character)
{
    *this = character;
}

Character& Character::operator=(const Character& character)
{
    this->_name = character._name;

    for (int i = 0; i < 4; i++)
    {
        _materia[i] = character._materia[i]->clone();
    }
    return (*this);
}

Character::~Character()
{
    cout << "Character destructor called." << endl;
}

string const& Character::getName() const
{
    return (_name);
}

void Character::equip(AMateria* materia)
{
    if (materia)
    {
        for (int i = 0; i < 4; i++)
        {
            if (!this->_materia[i])
            {
                _materia[i] = materia;
                break;
            }
            
        }

    }
    
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx <= 3)
    {
        _materia[idx] = NULL;
    }
    
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx <= 3)
    {
        _materia[idx]->use(target);
    }
    
    
}