#include "DiamondTrap.hpp"


int main()
{

    DiamondTrap diamond("Bonbon");
    cout << "Damage : " << diamond.getDamage() << endl;
    cout << "Energy : " << diamond.getEnergy() << endl;
    cout << "HitPoint : " << diamond.getHit() << endl;

    diamond.attack("Tonton");
    diamond.beRepaired(30);

    cout << "Damage : " << diamond.getDamage() << endl;
    cout << "Energy : " << diamond.getEnergy() << endl;
    cout << "HitPoint : " << diamond.getHit() << endl;

    diamond.whoAmI();
   
   return 0;
   
}