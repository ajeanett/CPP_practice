/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 18:49:32 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/02 20:27:57 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Zombie_HPP
# define Zombie_HPP

# include "Enemy.hpp"

class           Zombie : public Enemy 
{
public:
	Zombie();
    Zombie(const Zombie &src);
	Zombie	&operator=(const Zombie &src);
	virtual ~Zombie();
    void takeDamage(int amount);
};

#endif