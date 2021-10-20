/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 18:48:55 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/02 18:49:03 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) { }

void PlasmaRifle::attack() const
{
	std::cout <<  "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle::~PlasmaRifle() {
	std::cout << "Plasma Rifle destroyed" << std::endl;
}

PlasmaRifle	&PlasmaRifle::operator=(const PlasmaRifle &weapon) {
	AWeapon::operator=(weapon);
	return (*this);
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &waepon) 
{
	*this = waepon;
}
