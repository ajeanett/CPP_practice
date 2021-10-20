/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 11:20:36 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/01 18:18:52 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

std::string FragTrap::funny_attacks[NUM_OF_FIELDS] =
{
	" fucked the enemy with the big blue dildo! The enemy fled in panic, losing clothes and weapons.",
	" morally humiliated the enemy, declaring him a helpless insignificance and the fact that he slept with his wife. Morality!",
	" frightened the enemy to a systemic failure with the face of Greta Thunberg.",
	" shouted to the enemy - 'Go drink some poison, buy socks, eat tomatoes and kill yourself against the wall! Fuck you already!'",
	" reset the enemy's account, added Norminette errors and changed the deadline for today.",
    " says KAWABANGA! Attack with a thousand pizzas. The enemy dies of obesity and excess cholesterol.",
    " turned on the songs of Olga Buzova at full volume. The enemy's ears are curled up.",
};

std::string    fun_attack(std::string const & target, std::string attack)
{
    std::string enemy = "enemy";
    int         find;

    find = attack.find(enemy);
	while (find != -1)
	{
		attack.replace(attack.find(enemy), enemy.size(), target);
		find = attack.find(enemy, find + enemy.length());
	}
    return attack;
}

FragTrap::FragTrap()
{
    std::cout << BLUE"I am the best robot. Yeah, yeah, yeah, I am the best robot. Ooh, ooh, here we go!"END << std::endl;
    this->_name = "Luke";
	this->_hp = 100;
	this->_maxhp = 100;
	this->_enp = 100;
	this->_maxenp = 100;
	this->_level = 1;
	this->_melee_dam = 30;
	this->_ranged_dam = 20;
	this->_armor = 5;
    set_save_hp(100);
    set_save_maxhp(100);
    set_ranged_dam(20);
    set_armor(5);
}

FragTrap::FragTrap(const std::string & name)
{
    std::cout << BLUE2"Greetings Traveller! There are new missions available at the Fyrestone Bounty-board!"END << std::endl;
    this->_name = name;
	this->_hp = 100;
	this->_maxhp = 100;
	this->_enp = 100;
	this->_maxenp = 100;
	this->_level = 1;
	this->_melee_dam = 30;
	this->_ranged_dam = 20;
	this->_armor = 5;
    set_save_hp(100);
    set_save_maxhp(100);
    set_ranged_dam(20);
    set_armor(5);
}

FragTrap::FragTrap(FragTrap const & src) {
    std::cout << CYAN"Hey! Over here! I'm over heere!"END << std::endl;
    *this = src;
    return;
}

FragTrap::~FragTrap(void) {
    
    std::cout << RED"I can see... the code "END << std::endl;
    return;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    if (this->_enp >= 25)
    {
        this->pre_print();
        std::cout << MAGENTA" " + _name << fun_attack(target, funny_attacks[rand() % 7])<< END <<std::endl;
        this->_enp -= 25;
        (_enp < 0) ? _enp = 0 : 0;
    }
    else
    {
        this->pre_print();
        std::cout << " " + _name + " has not enough energy to attack :(" << std::endl;
    }
}

std::ostream & operator<<(std::ostream & o, FragTrap const & rhs) {
    o << rhs.get_name();
    return o;
}

void FragTrap::pre_print(void)
{
    std::cout << YELLOW "FR4G-TP"END ;
}