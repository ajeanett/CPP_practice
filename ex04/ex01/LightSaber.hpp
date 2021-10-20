/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LightSaber.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 18:49:05 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/02 20:55:22 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIGHTSABER_CPP
# define LIGHTSABER_CPP

#include "LightSaber.hpp"
#include "AWeapon.hpp"
#include <iostream>

class LightSaber : public AWeapon
{
public:
	LightSaber();
	void attack() const;
    virtual ~LightSaber();
    LightSaber(const LightSaber &weapon);
    LightSaber		&operator=(const LightSaber &weapon);
};

#endif