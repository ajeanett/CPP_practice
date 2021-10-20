/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LightSaber.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 18:48:55 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/02 18:49:03 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LightSaber.hpp"

LightSaber::LightSaber() : AWeapon("Light Saber", 6, 40) { }

void LightSaber::attack() const
{
	std::cout <<  "* vzzzzzvzzzzvzzzzz *" << std::endl;
}

LightSaber::~LightSaber() {
	std::cout << "Light Saber destroyed" << std::endl;
}

LightSaber	&LightSaber::operator=(const LightSaber &weapon) {
	AWeapon::operator=(weapon);
	return (*this);
}

LightSaber::LightSaber(const LightSaber &waepon) 
{
	*this = waepon;
}
