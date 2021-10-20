/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Minigun.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 18:48:55 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/02 18:49:03 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Minigun.hpp"

Minigun::Minigun() : AWeapon("Minigun", 10, 80) { }

void Minigun::attack() const
{
	std::cout <<   "*TRA TA TA TA TRA TA TA TA TA TA*" << std::endl;
}

Minigun::~Minigun() {
	std::cout << "Minigun destroyed" << std::endl;
}

Minigun	&Minigun::operator=(const Minigun &weapon) {
	AWeapon::operator=(weapon);
	return (*this);
}

Minigun::Minigun(const Minigun &waepon) 
{
	*this = waepon;
}
