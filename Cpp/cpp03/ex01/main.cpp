#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{

    ScavTrap scav("Bonbon");

    cout << "Damage : " << scav.getDamage() << endl;
    cout << "Energy : " << scav.getEnergy() << endl;
    cout << "HitPoint : " << scav.getHit() << endl;

    scav.attack("Tonton");
    scav.beRepaired(2);

    cout << "Damage : " << scav.getDamage() << endl;
    cout << "Energy : " << scav.getEnergy() << endl;
    cout << "HitPoint : " << scav.getHit() << endl;

    scav.guardGate();
   
   return 0;
   
}