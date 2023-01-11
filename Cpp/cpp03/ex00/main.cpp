#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("Bonbon");
    clap.attack("Tonton");
    clap.takeDamage(4);
    clap.beRepaired(2);
    cout << clap.getHit() << endl;
    cout << clap.getEnergy() << endl;
   
   
}