#include "Sorcerer.hpp"

Sorcerer::Sorcerer() {
    this->_name = "Simon";
    this->_title = "the Sorcerer";
    std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;

}

Sorcerer::Sorcerer(const std::string &name, const std::string &title)
{
    this->_name = name;
    this->_title = title;
    std::cout << BLUE << this->_name << ", " << this->_title << " , is born!"END << std::endl;
}

Sorcerer::~Sorcerer() {
    std::cout << RED << this->_name << ", " << this->_title << " , is dead. Consequences will never be the same!"END << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &cpy) {
	std::cout << "Let`s do some copy magic!" << std::endl;
	*this = cpy;
    std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer	&Sorcerer::operator=(const Sorcerer &src) {
	std::cout << "Assignation spell!" << std::endl;
	this->_name = src._name;
	this->_title = src._title;
	return (*this);
}

std::string		Sorcerer::get_name() const {
	return (this->_name);
}

std::string		Sorcerer::get_title() const {
	return (this->_title);
}

std::ostream		&operator<<(std::ostream &o, const Sorcerer &src) {
	o << "I am " << src.get_name() << ", " << src.get_title() << ", and I like ponies!" << std::endl;
	return (o);
}

void			Sorcerer::polymorph(Victim const &vict) const 
{
	vict.getPolymorphed();
}
// void			Sorcerer::polymorph(Peon const &peon) const 
// {
// 	peon.getPolymorphed();
// }