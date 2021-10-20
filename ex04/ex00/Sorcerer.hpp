#ifndef SORCERER_HPP
#define SORCERER_HPP
#include <string>
#include <iostream>
#include "Victim.hpp"

class Sorcerer {
private:
	Sorcerer();
	std::string _name;
	std::string _title;

public:
	Sorcerer(const std::string &name, const std::string &title);
	~Sorcerer();
	Sorcerer(Sorcerer const & src);
	Sorcerer & operator = (Sorcerer const & src);
	std::string get_name() const;
	std::string get_title() const;

	void			polymorph(Victim const &) const;
};

std::ostream &operator << (std::ostream &o, const Sorcerer & src);


#endif