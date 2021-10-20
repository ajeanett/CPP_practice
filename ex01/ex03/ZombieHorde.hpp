/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 19:25:46 by ajeanett          #+#    #+#             */
/*   Updated: 2021/03/28 13:09:13 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_HPP
#define ZOMBIE_HORDE_HPP

# include <string>
# include <iostream>
# include "Zombie.hpp"

# define FIELDS 10

class ZombieHorde
{
public:
	ZombieHorde();
	~ZombieHorde();
	ZombieHorde(int n);
	void		announce();
	void 	    setZombieType(std::string type);
	Zombie*     newZombie(std::string name);

protected:
    static std::string names[FIELDS];
    
private:
	std::string 	_type;
	Zombie		 	*_horde;
	int 			_num;
};

#endif