/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 18:48:24 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/03 12:19:14 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("Player"), _ap(40), _wp(NULL) {}

Character::Character(std::string const &name) : _name(name), _ap(40), _wp(NULL) {}

Character		&Character::operator=(const Character &src) {
    this->_name = src._name;
    this->_ap = src._ap;
    this->_wp = src._wp;
    return (*this);
}

Character::Character(const Character &src) 
{ 
    *this = src;
}

Character::~Character()
{
	std::cout << "Character destroyed" << std::endl;
}

void			Character::recoverAP() 
{
    this->_ap += 10;
	if (this->_ap > 40)
		this->_ap = 40;
}

void			Character::equip(AWeapon *wp) 
{
	this->_wp = wp;
}

void			Character::attack(Enemy *target) 
{
    if (!this->_wp)
    {
        // std::cout << this->_name + "is unarmed!" << std::endl;
        return;
    }
    if(!target)
    {
        std::cout << "No target to attack!" << std::endl;
        return;
    }
	if (this->_ap < this->_wp->getAPCost())
    {
        std::cout << "Not enough action points to attack!" << std::endl;
		return ;
    }
    this->_ap -= this->_wp->getAPCost();
	std::cout << this->_name << " attacks " << target->getType() << " with a " << this->_wp->getName() << std::endl;
	this->_wp->attack();
	target->takeDamage(this->_wp->getDamage());
	if (target->getHP() == 0)
    {
		delete (target);
    }
}

std::string	const	Character::getName() const 
{
	return (this->_name);
}

AWeapon			*Character::getWeapon() const 
{
	return (this->_wp);
}

int				Character::getAP() const 
{
	return (this->_ap);
}

std::ostream	&operator<<(std::ostream &o, const Character &src) 
{
    if (src.getWeapon())   
    	o << src.getName() << " has " << src.getAP() << " AP and " << "wields a " << src.getWeapon()->getName() << std::endl;
	else
		o << src.getName() << " has " << src.getAP() << " AP and is unarmed" << std::endl;
	return (o);
}