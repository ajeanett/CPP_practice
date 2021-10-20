#include "Peon.hpp"
#include <iostream>

Peon::Peon(const std::string& name) : Victim(name)
{
	std::cout << "Zog zog.\n";
}

Peon::~Peon()
{
	std::cout << "Bleuark...\n";
}

void Peon::getPolymorphed() const
{
	std::cout << this->get_name() << " has been turned into a pink pony!\n";
}

Peon & Peon::operator=(const Peon &src)
{
	Victim::operator=(src);
	return (*this);
}

Peon::Peon(const Peon &src) : Victim(src){}
