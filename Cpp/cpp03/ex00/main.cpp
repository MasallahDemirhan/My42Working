#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("Bonbon");

    cout << "Damage : " << clap.getDamage() << endl;
    cout << "Energy : " << clap.getEnergy() << endl;
    cout << "HitPoint : " << clap.getHit() << endl;

    clap.attack("Tonton");
    clap.beRepaired(2);
    clap.takeDamage(3);

    cout << "Damage : " << clap.getDamage() << endl;
    cout << "Energy : " << clap.getEnergy() << endl;
    cout << "HitPoint : " << clap.getHit() << endl;
   
   return 0;
}
