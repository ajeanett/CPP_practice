/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhilippKirkorov.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 18:49:32 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/02 20:27:57 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PhilippKirkorov_HPP
# define PhilippKirkorov_HPP

# include "Enemy.hpp"

class           PhilippKirkorov : public Enemy 
{
public:
	PhilippKirkorov();
    PhilippKirkorov(const PhilippKirkorov &src);
	PhilippKirkorov	&operator=(const PhilippKirkorov &src);
	virtual ~PhilippKirkorov();
    void takeDamage(int amount);
};

#endif