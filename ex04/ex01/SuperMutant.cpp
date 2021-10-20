/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 18:49:27 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/02 20:18:32 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "SuperMutant") 
{
	// std::cout << "Kill the humans! Kill them all! Aggghhh!!" << std::endl;
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &enemy)
{
	// std::cout << "Why... you... stupid.. humans... always... fight?! {angry battle taunt}" << std::endl;
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
	*this = enemy;
}

SuperMutant::~SuperMutant() 
{
	// std::cout << "Aaaaiiiieeee! {dying scream}" << std::endl;
    std::cout << "Aaargh..." << std::endl;
    
}

SuperMutant	&SuperMutant::operator=(const SuperMutant &src) 
{
	Enemy::operator=(src);
	return (*this);
}

void	SuperMutant::takeDamage(int amount) 
{
    // int i = amount - 3;
	// if (i < 0)
	// 	i = 0;
	Enemy::takeDamage(amount - 3);
}
