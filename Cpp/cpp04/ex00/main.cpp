#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
const WrongAnimal* wr = new WrongCat();

cout << j->getType() << " " << std::endl;
cout << i->getType() << " " << std::endl;
cout << wr->getType() << " " << std::endl;


i->makeSound();
j->makeSound();
meta->makeSound();
wr->makeSound();

delete (meta);
delete (i);
delete (j);
delete (wr);
return 0;
}
