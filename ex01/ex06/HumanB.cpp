#include "HumanB.hpp"

HumanB::HumanB() {}

HumanB::HumanB(std::string name)
{
    this->_name = name;
}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon &weapon) 
{
    this->_weapon = &weapon;
}

void HumanB::attack()
{
	std::cout << this->_name << " attack with his " << this->_weapon->getType() << std::endl;;
}