/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 11:20:36 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/01 17:16:09 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

std::string NinjaTrap::distractions[FIELDS] =
{
	" Young man, how to get to the library?",
	" Young man, have a smoke?",
	" Young man, what is Truth?",
	" My lord! Can you tell me how many degrees are below zero?",
	" Hey, sir! Do you have harumamburu?",
    " Hey, Bro! Do you know how to use the new version of norminette?"
};

NinjaTrap::NinjaTrap( void )
{
    std::cout << GREEN"NinjaTrap appeared!"END << std::endl;
    this->_name = "Ninjatrap";
	this->_hp = 60;
	this->_maxhp = 60;
	this->_enp = 120;
	this->_maxenp = 120;
	this->_level = 1;
	this->_melee_dam = 60;
	this->_ranged_dam = 5;
	this->_armor = 0;
}

NinjaTrap::NinjaTrap(const std::string & name)
{
    std::cout << BLUE2"NinjaTrap appeared from shadows"END << std::endl;
    this->_name = name;
	this->_hp = 60;
	this->_maxhp = 60;
	this->_enp = 120;
	this->_maxenp = 120;
	this->_level = 1;
	this->_melee_dam = 60;
	this->_ranged_dam = 5;
	this->_armor = 0;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src) {
    std::cout << CYAN"Yoo hoooooooooo!"END << std::endl;
    *this = src;
    return;
}

NinjaTrap::~NinjaTrap(void) {
    
    std::cout << RED"NinjaTrap disappeared into the shadows"END << std::endl;
    return;
}

std::ostream & operator<<(std::ostream & o, NinjaTrap const & rhs) {
    o << rhs.get_name();
    return o;
}

void NinjaTrap::pre_print(void)
{
    std::cout << YELLOW "Ninja"END;
}

void		NinjaTrap::ninjaShoebox(ClapTrap &target) {
	std::cout << this->get_name() << distractions[rand() % 6] << std::endl;
	this->pre_print();
	std::cout << " unexpectedly throws a shuriken  at " << target.get_name() <<  " with a force of 20" << std::endl;
	target.takeDamage(20);
}

void		NinjaTrap::ninjaShoebox(ScavTrap &target) {
	std::cout << this->get_name() << distractions[rand() % 6] << std::endl;
	this->pre_print();
	std::cout << " unexpectedly throws a shuriken  at " << target.get_name() <<  " with a force of 20" << std::endl;
	target.takeDamage(20);
}

void		NinjaTrap::ninjaShoebox(FragTrap &target) {
	std::cout << this->get_name() << distractions[rand() % 6] << std::endl;
	this->pre_print();
	std::cout << " unexpectedly throws a shuriken  at " << target.get_name() <<  " with a force of 20" << std::endl;
	target.takeDamage(20);
}

void		NinjaTrap::ninjaShoebox(NinjaTrap &target) {
	std::cout << this->get_name() << distractions[rand() % 6] << std::endl;
	this->pre_print();
	std::cout << " unexpectedly throws a shuriken  at " << target.get_name() <<  " with a force of 20" << std::endl;
	target.takeDamage(20);
}