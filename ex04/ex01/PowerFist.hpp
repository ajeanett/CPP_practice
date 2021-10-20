/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 18:49:15 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/02 18:49:18 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_CPP
# define POWERFIST_CPP

#include "PowerFist.hpp"
#include "AWeapon.hpp"
#include <iostream>

class PowerFist : public AWeapon
{
public:
	PowerFist();
	void attack() const;
    virtual ~PowerFist();
    PowerFist(const PowerFist &weapon);
    PowerFist		&operator=(const PowerFist &weapon);
};

#endif