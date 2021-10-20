/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 11:20:36 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/01 18:28:28 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

std::string SuperTrap::distractions[FIELDS] =
{
	" Young man, how to get to the library?",
	" Young man, have a smoke?",
	" Young man, what is Truth?",
	" My lord! Can you tell me how many degrees are below zero?",
	" Hey, sir! Do you have harumamburu?",
    " Hey, Bro! Do you know how to use the new version of norminette?"
};

SuperTrap::SuperTrap( void )
{
    std::cout << GREEN"SuperTrap created!"END << std::endl;
    this->_name = "Supertrap";
	this->_hp = get_save_hp();
	this->_maxhp = get_save_maxhp();
	this->_enp = NinjaTrap::_enp;
	this->_maxenp = NinjaTrap::_maxenp;
	this->_level = 1;
	this->_melee_dam = NinjaTrap::_melee_dam;
	this->_ranged_dam = get_ranged_dam();
	this->_armor = get_armor();
}

SuperTrap::SuperTrap(const std::string & name)
{
    std::cout << BLUE2"SuperTrap created!"END << std::endl;
    this->_name = name;
	this->_hp = FragTrap::get_save_hp();
	this->_maxhp = FragTrap::get_save_maxhp();
	this->_enp = NinjaTrap::_enp;
	this->_maxenp = NinjaTrap::_maxenp;
	this->_level = 1;
	this->_melee_dam = NinjaTrap::_melee_dam;
	this->_ranged_dam = FragTrap::get_ranged_dam();
	this->_armor = FragTrap::get_armor();
}

SuperTrap::SuperTrap(SuperTrap const & src) {
    std::cout << CYAN"Yoo hoooooooooo!"END << std::endl;
    *this = src;
    return;
}

SuperTrap::~SuperTrap(void) {
    
    std::cout << RED"Superman returned to Krypton"END << std::endl;
    return;
}

std::ostream & operator<<(std::ostream & o, SuperTrap const & rhs) {
    o << rhs.get_name();
    return o;
}

// void		SuperTrap::rangedAttack(std::string const &target) 
// {
// 	this->FragTrap::rangedAttack(target);
// }

// void		SuperTrap::meleeAttack(std::string const &target) 
// {
// 	this->NinjaTrap::meleeAttack(target);
// }

void SuperTrap::pre_print(void)
{
    std::cout << YELLOW "Super"END;
}