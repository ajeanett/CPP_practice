/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 18:49:05 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/02 18:49:12 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_CPP
# define PLASMARIFLE_CPP

#include "PlasmaRifle.hpp"
#include "AWeapon.hpp"
#include <iostream>

class PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle();
	void attack() const;
    virtual ~PlasmaRifle();
    PlasmaRifle(const PlasmaRifle &weapon);
    PlasmaRifle		&operator=(const PlasmaRifle &weapon);
};

#endif