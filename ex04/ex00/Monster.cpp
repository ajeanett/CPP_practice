#include "Monster.hpp"
#include <iostream>

Monster::Monster(const std::string& name) : Victim(name)
{

	std::cout << "Waaaaaaaaargh!!!!" << std::endl;
}

Monster::~Monster()
{
	std::cout << "Bye bye!" << std::endl;
}

void Monster::getPolymorphed() const
{
	std::cout << this->get_name() << " has been turned into a beautiful princess!\n";
}

Monster & Monster::operator=(const Monster &src)
{
	Victim::operator=(src);
	return (*this);
}

Monster::Monster(const Monster &src) : Victim(src){}
