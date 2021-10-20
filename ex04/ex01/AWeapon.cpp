/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 18:48:18 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/02 18:48:33 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon() 
{
    this->_name = "default";
    this->_damage = 0;
    this->_apcost = 0;
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) 
{
	this->_name = name;
	this->_apcost = apcost;
	this->_damage = damage;
}

AWeapon::~AWeapon() {}

AWeapon	&AWeapon::operator=(const AWeapon &weapon) {
	this->_name = weapon._name;
	this->_apcost = weapon._apcost;
	this->_damage = weapon._damage;
	return (*this);
}

AWeapon::AWeapon(const AWeapon &waepon) 
{
	*this = waepon;
}

std::string const   AWeapon::getName() const 
{
    return (this->_name);
}

int                 AWeapon::getDamage() const {
    return (this->_damage);
}

int                 AWeapon::getAPCost() const 
{
    return (this->_apcost);
}

