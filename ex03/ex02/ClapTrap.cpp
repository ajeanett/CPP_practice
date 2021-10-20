/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 11:20:36 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/01 12:12:30 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
    std::cout << GREEN"Parent class ClapTrap constructed"END << std::endl;
    this->_name = "Claptrap";
	this->_hp = 60;
	this->_maxhp = 60;
	this->_enp = 120;
	this->_maxenp = 120;
	this->_level = 1;
	this->_melee_dam = 60;
	this->_ranged_dam = 5;
	this->_armor = 0;
}


ClapTrap::ClapTrap(const std::string & name)
{
    std::cout << BLUE2"Parent class ClapTrap constructed"END << std::endl;
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

ClapTrap::ClapTrap(ClapTrap const & src) {
    std::cout << CYAN"Yoo hoooooooooo!"END << std::endl;
    *this = src;
    return;
}

ClapTrap::~ClapTrap(void) {
    
    std::cout << RED"Parent class ClapTrap destroyed"END << std::endl;
    return;
}

std::string     ClapTrap::get_name(void) const {
    return this->_name;
}

ClapTrap &   ClapTrap::operator=(ClapTrap const & src) {

    if (this != &src)
	{
		this->_name = src._name;
		this->_hp = src._hp;
		this->_maxhp = src._maxhp;
		this->_enp = src._enp;
		this->_maxenp = src._maxenp;
		this->_level = src._level;
		this->_melee_dam = src._melee_dam;
		this->_ranged_dam = src._ranged_dam;
		this->_armor = src._armor;
	}
	return *this;
}

void ClapTrap::rangedAttack(std::string const & target)
{
    this->pre_print();
    std::cout << " " + _name + " attacks " + target + " at range, causing " << _ranged_dam << " points of damage!" << std::endl;; 
}

void ClapTrap::meleeAttack(std::string const & target)
{
    this->pre_print();
    std::cout << " " + _name + " attacks " + target + " at melee, causing " << _melee_dam << " points of damage!" << std::endl;; 
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->pre_print();
    std::cout << " " + _name + " was furiously attacked by enemy and received " << ((amount - _armor) > 0 ? (amount - _armor) : 0) << " points of damage! ";
    std::cout << "Please don't shoot me, please don't shoot me, please don't shoot me!" << std::endl;
    this->_hp -= ((amount - _armor) > 0 ? (amount - _armor) : 0);
    (_hp < 0) ? _hp = 0 : 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    this->pre_print();
    int i = (((int)amount + _hp) <= _maxhp ? amount : _maxhp - _hp);
    std::cout << " " + _name + " was repaired and restore " << i << " hit points!";
    std::cout << " Feel refreshed! "  << std::endl;
    this->_hp = (((int)amount + _hp) < _maxhp ? (amount + _hp) : _maxhp);
}

std::ostream & operator<<(std::ostream & o, ClapTrap const & rhs) {
    o << rhs.get_name();
    return o;
}

void ClapTrap::pre_print(void)
{
    std::cout << YELLOW "Clap"END;
}

void ClapTrap::print_parameters(void)
{
    std::cout << "Character name is: "  << _name << std::endl;
    std::cout << "Current hit points is: "  << _hp << std::endl;
    std::cout << "Current energy points is: "  << _enp << std::endl;
}