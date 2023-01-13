#include "Brain.hpp"

Brain::Brain()
{
    cout << "Brain default constructor called." << endl;
}

Brain& Brain::operator=(const Brain& obj)
{
    for (int  i = 0; i < 100; i++)
    {
        this->ideas[i] = obj.ideas[i];
    }
    cout << "Brain operator assignation called." << endl;
    return (*this);
}

Brain::Brain(const Brain& obj)
{
    cout << "Brain copy constructor called." << endl;
    *this = obj;
}


Brain::~Brain()
{
    cout << "Brain destructor called." << endl;
}