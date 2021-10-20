/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aweapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 18:48:36 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/02 21:02:57 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>
# include "colors.hpp"

class       		AWeapon {
private:
	std::string		_name;
	int				_apcost;
	int				_damage;
protected:
    AWeapon();
public:
	AWeapon(std::string const & name, int apcost, int damage);
	virtual ~AWeapon();
	AWeapon			&operator=(const AWeapon &);
	AWeapon(const AWeapon &);
	std::string const	getName() const;
	int					getAPCost() const;
	int					getDamage() const;
	virtual void		attack() const = 0;
};

#endif
