/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 16:30:55 by ajeanett          #+#    #+#             */
/*   Updated: 2021/03/28 13:27:37 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string Zombie::phrase[NUM_OF_FIELDS] =
{
	"Braiiiiiiinnnssss...",
	"Zombies eat brains, you are safe",
	"A mind is a terrible thing to waste",
	"Blood is really warm, it’s like drinking hot chocolate but with more screaming",
	"Dear girls, We like you for your brains, not your body"
};

void    Zombie::announce(void)
{
    std::cout << "< " << this->_name << " (" << this->_type << ")> ";
    std::cout << phrase[rand() % 5] << std::endl;
}

Zombie::Zombie()
{
    this->_name = "nameless zombie";
    this->_type = "zombie warrior";
}

Zombie::Zombie(std::string _name, std:: string _type)
{
    this->_name = _name;
    this->_type = _type;
}

Zombie::~Zombie()
{
}

void Zombie::setZombieName(std::string &name)
{
	this->_name = name;
}

void Zombie::setZombieType(std::string type)
{
	this->_type = type;
}