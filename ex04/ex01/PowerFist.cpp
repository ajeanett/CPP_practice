/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 18:49:49 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/02 20:31:24 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) { }

void PowerFist::attack() const
{
	std::cout <<  "* pschhh... SBAM! *" << std::endl;
}

PowerFist::~PowerFist() {
	std::cout << "Power Fist destroyed" << std::endl;
}

PowerFist	&PowerFist::operator=(const PowerFist &weapon) {
	AWeapon::operator=(weapon);
	return (*this);
}

PowerFist::PowerFist(const PowerFist &waepon) 
{
	*this = waepon;
}