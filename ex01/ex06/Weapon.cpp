#include "Weapon.hpp"

Weapon::Weapon() 
{
    this->_type = "fist";
}

Weapon::~Weapon() {}

Weapon::Weapon(std::string type) 
{ 
    this->_type = type;
}

const std::string     &Weapon::getType() 
{
    return (this->_type);
}

void            Weapon::setType(std::string type) 
{
    // std::cout << "type " << type << std::endl;
    // std::cout << "ya tut " << _type << std::endl;
    this->_type = type;
    // std::cout << "ya tut " << _type << std::endl;
}