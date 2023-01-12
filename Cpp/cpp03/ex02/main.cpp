#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{

    FragTrap frag("Bonbon");

    cout << "Damage : " << frag.getDamage() << endl;
    cout << "Energy : " << frag.getEnergy() << endl;
    cout << "HitPoint : " << frag.getHit() << endl;

    frag.attack("Tonton");
    frag.beRepaired(2);

    cout << "Damage : " << frag.getDamage() << endl;
    cout << "Energy : " << frag.getEnergy() << endl;
    cout << "HitPoint : " << frag.getHit() << endl;

    frag.highFivesGuys();
   
   return 0;
   
}