/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@42.ru>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 19:56:44 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/06 20:57:38 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
}

Ice                 &Ice::operator=(const Ice &src) {
    AMateria::operator=(src);
    return (*this);
}

Ice::Ice(const Ice &src) {
    *this = src;
}

Ice::~Ice() {}

Ice                  *Ice::clone() const {
	Ice* clone = new Ice;
	return (clone);
}

void		Ice::use(ICharacter &target) {
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " + target.getName() + " *" << std::endl;
}
