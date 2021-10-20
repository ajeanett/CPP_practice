/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 18:49:32 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/02 20:27:57 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class           SuperMutant : public Enemy 
{
public:
	SuperMutant();
    SuperMutant(const SuperMutant &src);
	SuperMutant	&operator=(const SuperMutant &src);
	virtual ~SuperMutant();
    void takeDamage(int amount);
};

#endif