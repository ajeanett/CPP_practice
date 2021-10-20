/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@42.ru>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 12:28:06 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/06 19:43:24 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() 
{
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &src) 
{
    // (void)src;
    if (this != &src)
    {
        *this = src;
    }
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator() 
{
	std::cout << "I`ll be back..." << std::endl;
}

AssaultTerminator			&AssaultTerminator::operator=(const AssaultTerminator &src) 
{
    (void)src;
    std::cout << "* teleports from space *" << std::endl;
    return (*this);
}

AssaultTerminator			*AssaultTerminator::clone() const 
{
	AssaultTerminator* clone = new AssaultTerminator(*this);
	return (clone);
}

void					AssaultTerminator::battleCry() const 
{
	std::cout <<  "This code is unclean. PURIFY IT!" << std::endl;
}

void					AssaultTerminator::rangedAttack() const 
{
	std::cout << "* does nothing *" << std::endl; 
}

void					AssaultTerminator::meleeAttack() const 
{
	std::cout << "* attacks with chainfists *" << std::endl;	
}