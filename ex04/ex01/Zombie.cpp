/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 18:49:27 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/02 20:18:32 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : Enemy(100, "Zombie") 
{
	// std::cout << "Kill the humans! Kill them all! Aggghhh!!" << std::endl;
    std::cout << "It's the zombie apocalypse! Come on, we're scouts! We're trained for this!" << std::endl;
}

Zombie::Zombie(const Zombie &enemy)
{
	// std::cout << "Why... you... stupid.. humans... always... fight?! {angry battle taunt}" << std::endl;
    std::cout << "It's the zombie apocalypse! Come on, we're scouts! We're trained for this!" << std::endl;
	*this = enemy;
}

Zombie::~Zombie() 
{
	std::cout << "Aaaaiiiieeee! *Zombie destroyed* {dying scream}" << std::endl;
    // std::cout << "'UAAAARGHhhhhh' *Zombie destroyed* {dying scream}" << std::endl;
    
}

Zombie	&Zombie::operator=(const Zombie &src) 
{
	Enemy::operator=(src);
	return (*this);
}

void	Zombie::takeDamage(int amount) 
{
    // int i = amount - 3;
	// if (i < 0)
	// 	i = 0;
	Enemy::takeDamage(amount - 10);
}
