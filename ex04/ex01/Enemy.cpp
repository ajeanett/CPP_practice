/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 18:48:45 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/02 20:38:26 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy() : _type("Enemy"), _hp(0) 
{
    // std::cout << "Enemy constructed" << std::endl;
}

Enemy::~Enemy() 
{
    // std::cout << "Enemy destroyed" << std::endl;
}

Enemy::Enemy(int hp, std::string const & type) : _type(type), _hp(hp) 
{
    // std::cout << "Enemy constructed" << std::endl;
}

Enemy	&Enemy::operator=(const Enemy &src) 
{
    this->_type = src._type;
	this->_hp = src._hp;
	return (*this);
}

Enemy::Enemy(const Enemy &src) 
{
	*this = src;
}

std::string const	Enemy::getType() const 
{
	return (this->_type);
}

int					Enemy::getHP() const 
{
	return (this->_hp);
}

void		Enemy::takeDamage(int amount) 
{
	if (amount <= 0)
		return ;
	this->_hp -= amount;
    (this->_hp < 0) ? this->_hp = 0 : 0;
	// std::cout << RED << getType() << " received " << amount << " points of damage." END << std::endl;
}