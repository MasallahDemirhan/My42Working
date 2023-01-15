#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        _matteria[i] = NULL;
    }
    cout << "Materia source constructor." << endl;
    
}
MateriaSource::MateriaSource(const MateriaSource &materiaSource)
{
    for (int i = 0; i < 4; i++)
    {
        this->_matteria[i] = (materiaSource._matteria[i]) ? materiaSource._matteria[i]->clone() : NULL;
    }
    cout << "Materia source copy called." << endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &materiaSource)
{
    if (this != &materiaSource)
    {
        this->~MateriaSource();
        for (int i = 0; i < 4; i++)
        {
            this->_matteria[i] = (materiaSource._matteria[i]) ? materiaSource._matteria[i]->clone() : NULL;
        }
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_matteria[i])
        {
            delete this->_matteria[i];
        }
        
    }
    
}

void MateriaSource::learnMateria(AMateria* learn)
{
    if (learn)
    {
        for (int i = 0; i < 4; i++)
        {
            if (!(this->_matteria[i]))
            {
                this->_matteria[i] = learn;
                break;
            }
            
        }
        
    }
    
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
    for (int i = 0; i < 4; i++)
    {
        if(this->_matteria[i] && this->_matteria[i]->getType() == type)
        {
            return (this->_matteria[i]->clone());
        }
    }
    return NULL;
    
}