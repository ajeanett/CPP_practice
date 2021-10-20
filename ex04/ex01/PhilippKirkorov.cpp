/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhilippKirkorov.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 18:49:27 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/02 20:18:32 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhilippKirkorov.hpp"

PhilippKirkorov::PhilippKirkorov() : Enemy(50, "Philipp Kirkorov") 
{
	// std::cout << "Kill the humans! Kill them all! Aggghhh!!" << std::endl;
    std::cout << "Киркоров! Попса атакуэ!" << std::endl;
}

PhilippKirkorov::PhilippKirkorov(const PhilippKirkorov &enemy)
{
	// std::cout << "Why... you... stupid.. humans... always... fight?! {angry battle taunt}" << std::endl;
    std::cout << "Киркоров! Попса атакуэ!" << std::endl;
	*this = enemy;
}

PhilippKirkorov::~PhilippKirkorov() 
{
	// std::cout << "Aaaaiiiieeee! {dying scream}" << std::endl;
    std::cout << "'АААА! Я еще не всё спел!' *Киркоров уничтожен*" << std::endl;
    
}

PhilippKirkorov	&PhilippKirkorov::operator=(const PhilippKirkorov &src) 
{
	Enemy::operator=(src);
	return (*this);
}

void	PhilippKirkorov::takeDamage(int amount) 
{
    // int i = amount - 3;
	// if (i < 0)
	// 	i = 0;
	Enemy::takeDamage(amount);
}
