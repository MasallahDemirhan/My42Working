#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();

Animal* ani[8];

for (int i = 0; i < 8; i++)
{
    if (i < 4)
    {
        ani[i] = new Dog();
    }
    else
    {
        ani[i] = new Cat();
    }
}

for (int i = 0; i < 8; i++)
{
    cout << ani[i]->getType() << endl;
    ani[i]->makeSound();
}

for (int i = 0; i < 8; i++)
{
    delete ani[i];
}



delete j;
delete i;


return 0;
}
