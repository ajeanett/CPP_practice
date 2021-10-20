/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 11:20:36 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/01 11:32:46 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

std::string ScavTrap::funny_quests[FIELDS] =
{
	" tells that player need to kill Darksiders and gather their prisms before player can enter the Crisis Scar. Don't come back without prisms!" ,
	" asks player to kill the Giant Bull Netch with the Fork",
	" asks player to plant 100 roses, sort out millet and bake a cake",
	" asks player to go down to the basement and kill the rats",
	" asks player to dance the dance of little ducklings",
    " asks player to walk on all fours around the room, food 'I am the lunar rover alone, pip, pip ...'"
};

std::string    fun_challenge(std::string const & target, std::string attack)
{
    std::string player = "player";
    int         find;

    find = attack.find(player);
	while (find != -1)
	{
		attack.replace(attack.find(player), player.size(), target);
		find = attack.find(player, find + player.length());
	}
    return attack;
}

ScavTrap::ScavTrap( void ) : _hp(100), _maxhp(100), _enp(50), _maxenp(50), _level (1),
_name("Scavtrap"), _melee_dam(20), _ranged_dam(15), _armor(3)
{
    std::cout << BLUE"I'm over here!"END << std::endl;
}


ScavTrap::ScavTrap(const std::string & name) : _hp(100), _maxhp(100), _enp(50), _maxenp(50), _level (1),
_name(name), _melee_dam(20), _ranged_dam(15), _armor(3)
{
    std::cout << BLUE2"Stay a while, and listen. Oh god, please -- PLEASE! -- stay a while."END << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) {
    std::cout << CYAN"Yoo hoooooooooo!"END << std::endl;
    *this = src;
    return;
}

ScavTrap::~ScavTrap(void) {
    
    std::cout << RED"I'm detecting a motor unit malfunction... "END << std::endl;
    return;
}

std::string     ScavTrap::get_name(void) const {
    return this->_name;
}

ScavTrap &   ScavTrap::operator=(ScavTrap const & src) {

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

void ScavTrap::rangedAttack(std::string const & target)
{
    this->pre_print();
    std::cout << " " + _name + " attacks " + target + " at range, causing " << _ranged_dam << " points of damage!" << std::endl;; 
}

void ScavTrap::meleeAttack(std::string const & target)
{
    this->pre_print();
    std::cout << " " + _name + " attacks " + target + " at melee, causing " << _melee_dam << " points of damage!" << std::endl;; 
}

void ScavTrap::takeDamage(unsigned int amount)
{
    this->pre_print();
    std::cout << " " + _name + " was furiously attacked by enemy and received " << ((amount - _armor) > 0 ? (amount - _armor) : 0) << " points of damage! ";
    std::cout << "Please don't shoot me, please don't shoot me, please don't shoot me!" << std::endl;
    this->_hp -= ((amount - _armor) > 0 ? (amount - _armor) : 0);
    (_hp < 0) ? _hp = 0 : 0;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    this->pre_print();
    int i = (((int)amount + _hp) <= _maxhp ? amount : _maxhp - _hp);
    std::cout << " " + _name + " was repaired and restore " << i << " hit points!";
    std::cout << " Feel refreshed! "  << std::endl;
    this->_hp = (((int)amount + _hp) < _maxhp ? (amount + _hp) : _maxhp);
}

void ScavTrap::challengeNewcomer(std::string const & target)
{
 
    this->pre_print();
    std::cout << GREEN" " + _name << fun_challenge(target, funny_quests[rand() % 6])<< END <<std::endl;

}

std::ostream & operator<<(std::ostream & o, ScavTrap const & rhs) {
    o << rhs.get_name();
    return o;
}

void ScavTrap::pre_print(void)
{
    std::cout << YELLOW "SC4V-TP"END ;
}

void ScavTrap::print_parameters(void)
{
    std::cout << "Character name is: "  << _name << std::endl;
    std::cout << "Current hit points is: "  << _hp << std::endl;
    std::cout << "Current energy points is: "  << _enp << std::endl;
}