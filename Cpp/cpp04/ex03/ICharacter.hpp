#pragma once

class AMateria;

using std::string;
using std::endl;
using std::cout;


class ICharacter
{
private:
string _name;
public:
    virtual ~ICharacter() {}
    virtual std::string const& getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
};

