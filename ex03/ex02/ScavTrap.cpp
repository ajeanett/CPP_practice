/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 11:20:36 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/01 12:07:24 by ajeanett         ###   ########.fr       */
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

ScavTrap::ScavTrap( void )
{
    std::cout << BLUE"I'm over here!"END << std::endl;
    this->_name = "Scavtrap";
	this->_hp = 100;
	this->_maxhp = 100;
	this->_enp = 50;
	this->_maxenp = 50;
	this->_level = 1;
	this->_melee_dam = 20;
	this->_ranged_dam = 15;
	this->_armor = 3;
}


ScavTrap::ScavTrap(const std::string & name)
{
    std::cout << BLUE2"Stay a while, and listen. Oh god, please -- PLEASE! -- stay a while."END << std::endl;
    this->_name = name;
	this->_hp = 100;
	this->_maxhp = 100;
	this->_enp = 50;
	this->_maxenp = 50;
	this->_level = 1;
	this->_melee_dam = 20;
	this->_ranged_dam = 15;
	this->_armor = 3;
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