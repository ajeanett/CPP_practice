#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
public:
	HumanA();
    ~HumanA();
    HumanA(std::string name, Weapon &weapon);
	// HumanA(std::string name);
    void    setWeapon(Weapon &weapon);
    void    attack();

private:
	std::string _name;
    Weapon  &_weapon;
};

#endif