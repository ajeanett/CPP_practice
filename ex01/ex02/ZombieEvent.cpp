/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 17:56:44 by ajeanett          #+#    #+#             */
/*   Updated: 2021/03/29 13:59:02 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

static int getRandomNumber(int min, int max)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

std::string ZombieEvent::names[FIELDS] =
{
	"Sophia Peletier",
	"Billy Butcherson",
	"Mr.Zombie",
	"Harald",
	"Evil Ash",
    "Frankenstein",
    "Ghoulia Yelps",
    "White Walker",
    "Judge Hopkins",
    "Solomon Grundy",
};

ZombieEvent::ZombieEvent()
{ 
    this->_type = "Warrior";
}

ZombieEvent::~ZombieEvent(){}

void ZombieEvent::setZombieType(std::string type) 
{
    this->_type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
    Zombie  *zomb = new Zombie(name, this->_type);
    return (zomb);
}

Zombie	*ZombieEvent::randomChump()
{
	Zombie *zombie;
	zombie = this->newZombie(names[getRandomNumber(0,9)]);
    zombie->announce();
	return (zombie);
}

