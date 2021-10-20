#include "Victim.hpp"

Victim::Victim() 
{
    this->_name = "Victim";
    std::cout << "Some random victim called " + this->_name + " just appeared!" << std::endl;
}

Victim::Victim(std::string name) : _name(name) 
{
    std::cout << "Some random victim called " + this->_name + " just appeared!" << std::endl;
}

Victim::~Victim() 
{
    std::cout << "Victim " + this->_name + " just died for no apparent reason!" << std::endl;
}

Victim  &Victim::operator=(Victim const &src) 
{
    this->_name = src._name;
	std::cout << "Assignation operator called!" << std::endl;
    return (*this);
}

Victim::Victim(Victim const &src) 
{
	std::cout << "Victim: Let's clone brother!" << std::endl;
    *this = src;
    std::cout << "Some random victim called " << this->_name <<  " just appeared!" << std::endl;
}

std::string     Victim::get_name() const 
{
	return (this->_name);
}

std::ostream    &operator<<(std::ostream &o, const Victim &src) 
{
	o << "I'm " << src.get_name() << " and I like otters!" << std::endl;
	return (o);
}

void    Victim::getPolymorphed() const {
	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}
