/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Minigun.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 18:49:05 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/02 21:01:54 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINIGUN_CPP
# define MINIGUN_CPP

#include "Minigun.hpp"
#include "AWeapon.hpp"
#include <iostream>

class Minigun : public AWeapon
{
public:
	Minigun();
	void attack() const;
    virtual ~Minigun();
    Minigun(const Minigun &weapon);
    Minigun		&operator=(const Minigun &weapon);
};

#endif