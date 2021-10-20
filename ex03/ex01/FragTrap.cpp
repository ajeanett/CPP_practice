/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 11:20:36 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/01 11:33:13 by ajeanett         ###   ########.fr       */
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

FragTrap::FragTrap( void ) : _hp(100), _maxhp(100), _enp(100), _maxenp(100), _level (1),
_name("Claptrap"), _melee_dam(30), _ranged_dam(20), _armor(5)
{
    std::cout << BLUE"I am the best robot. Yeah, yeah, yeah, I am the best robot. Ooh, ooh, here we go!"END << std::endl;
    // std::cout << "Greetings Traveller! There are new missions available at the Fyrestone Bounty-board!" << std::endl;
}


FragTrap::FragTrap(const std::string & name) : _hp(100), _maxhp(100), _enp(100), _maxenp(100), _level (1),
_name(name), _melee_dam(30), _ranged_dam(20), _armor(5)
{
    std::cout << BLUE2"Greetings Traveller! There are new missions available at the Fyrestone Bounty-board!"END << std::endl;
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

std::string     FragTrap::get_name(void) const {
    return this->_name;
}

FragTrap &   FragTrap::operator=(FragTrap const & src) {

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

void FragTrap::rangedAttack(std::string const & target)
{
    this->pre_print();
    std::cout << " " + _name + " attacks " + target + " at range, causing " << _ranged_dam << " points of damage!" << std::endl;; 
}

void FragTrap::meleeAttack(std::string const & target)
{
    this->pre_print();
    std::cout << " " + _name + " attacks " + target + " at melee, causing " << _melee_dam << " points of damage!" << std::endl;; 
}

void FragTrap::takeDamage(unsigned int amount)
{
    this->pre_print();
    std::cout << " " + _name + " was furiously attacked by enemy and received " << ((amount - _armor) > 0 ? (amount - _armor) : 0) << " points of damage! ";
    std::cout << "Oh my God, I'm leaking! I think I'm leaking! Ahhhh, I'm leaking! There's oil everywhere!" << std::endl;
    this->_hp -= ((amount - _armor) > 0 ? (amount - _armor) : 0);
    (_hp < 0) ? _hp = 0 : 0;
}

void FragTrap::beRepaired(unsigned int amount)
{
    this->pre_print();
    int i = (((int)amount + _hp) <= _maxhp ? amount : _maxhp - _hp);
    std::cout << " " + _name + " was repaired and restore " << i << " hit points!";
    std::cout << " Good as new, I think. Am I leaking?"  << std::endl;
    this->_hp = (((int)amount + _hp) < _maxhp ? (amount + _hp) : _maxhp);
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

void FragTrap::print_parameters(void)
{
    std::cout << "Character name is: "  << _name << std::endl;
    std::cout << "Current hit points is: "  << _hp << std::endl;
    std::cout << "Current energy points is: "  << _enp << std::endl;
}