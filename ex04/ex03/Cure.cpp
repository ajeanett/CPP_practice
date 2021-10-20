/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@42.ru>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 19:56:40 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/06 22:30:28 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"

Cure::Cure() : AMateria("cure") 
{
}

Cure	&Cure::operator=(const Cure &src) 
{
    AMateria::operator=(src);
    return (*this);
}

Cure::Cure(const Cure &src) 
{
    *this = src;
}

Cure::~Cure() {}

Cure	*Cure::clone() const 
{
	Cure* clone = new Cure;
	return (clone);
}

void	Cure::use(ICharacter &target) 
{
	AMateria::use(target);
	std::cout << "* heals " + target.getName() + "`s wounds *" << std::endl;
}