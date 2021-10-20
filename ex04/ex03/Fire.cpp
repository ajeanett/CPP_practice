/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fire.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@42.ru>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 19:56:40 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/06 21:54:42 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Fire.hpp"

Fire::Fire() : AMateria("fire") 
{
}

Fire	&Fire::operator=(const Fire &src) 
{
    AMateria::operator=(src);
    return (*this);
}

Fire::Fire(const Fire &src) 
{
    *this = src;
}

Fire::~Fire() {}

Fire	*Fire::clone() const 
{
	Fire* clone = new Fire;
	return (clone);
}

void	Fire::use(ICharacter &target) {
	AMateria::use(target);
	std::cout << "* shoots a Fireball at " + target.getName() + " and received " << this->getXP() << "XP *" << std::endl;
}