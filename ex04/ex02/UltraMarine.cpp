/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UltraMarine.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 12:28:06 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/03 18:42:19 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "UltraMarine.hpp"

UltraMarine::UltraMarine()
{
    std::cout << "We serve only the Emperor!" << std::endl;
}

UltraMarine::UltraMarine(const UltraMarine &src) 
{
    // (void)src;
    if (this != &src)
    {
        *this = src;
    }
    std::cout << "* teleports from space *" << std::endl;
}

UltraMarine::~UltraMarine() 
{
	std::cout << "Our comrades will revenge!" << std::endl;
}

UltraMarine			&UltraMarine::operator=(const UltraMarine &src) 
{
    (void)src;
    std::cout << "We serve only the Emperor!" << std::endl;
    return (*this);
}

UltraMarine			*UltraMarine::clone() const 
{
	UltraMarine* clone = new UltraMarine(*this);
	return (clone);
}

void					UltraMarine::battleCry() const 
{
	std::cout <<  "For the Emperor and Sanguinius!" << std::endl;
}

void					UltraMarine::rangedAttack() const 
{
	std::cout << "* attacks with Star Thrower Plasma Gun *" << std::endl; 
}

void					UltraMarine::meleeAttack() const 
{
	std::cout << "* attacks with Gauntlets of Ultramar *" << std::endl;	
}