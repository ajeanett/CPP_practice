#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon)
{
    this->_name = name;
}

HumanA::~HumanA()
{

}

void HumanA::setWeapon(Weapon &weapon) 
{
    this->_weapon = weapon;
}

void HumanA::attack()
{
	std::cout << this->_name << " attack with his " << this->_weapon.getType() << std::endl;
}