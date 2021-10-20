/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 19:26:01 by ajeanett          #+#    #+#             */
/*   Updated: 2021/03/28 13:36:50 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

static int getRandomNumber(int min, int max)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

std::string ZombieHorde::names[FIELDS] =
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
    "Solomon Grundy"
};

ZombieHorde::ZombieHorde()
{ 
    this->_type = "Warrior";
    this->_num = 0;
}

ZombieHorde::~ZombieHorde()
{     
    if (this->_num > 0)
    {
        delete []_horde;
        std::cout << "Horde is destroyed. Forces of light are prevailed." << std::endl;
    }
}

void ZombieHorde::setZombieType(std::string type) 
{
    this->_type = type;
}

Zombie* ZombieHorde::newZombie(std::string name)
{
    Zombie  *zomb = new Zombie(name, this->_type);
    return (zomb);
}

ZombieHorde::ZombieHorde(int n)
{
    if (n <= 0)
    {
        std::cout << "Wrong size of the horde" << std::endl;
        return;
    }
    this->_num = n;
    this->_horde = new Zombie[this->_num];
    for (int i = 0 ; i < this->_num; i++)
    {
        this->_horde[i].setZombieName(names[getRandomNumber(0,9)]);
        this->_horde[i].setZombieType("Hordling");
    }
}

void ZombieHorde::announce()
{
    if (this->_num > 0)
    {
	    for (int i = 0; i < this->_num; i++)
		    this->_horde[i].announce();
    }
    else
        std::cout << "Horde does not exist" << std::endl;
}


