/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 17:58:40 by ajeanett          #+#    #+#             */
/*   Updated: 2021/03/27 19:01:13 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
#define ZOMBIE_EVENT_HPP

# include <string>
# include <iostream>
# include "Zombie.hpp"

# define FIELDS 10

class ZombieEvent
{
public:
	ZombieEvent();
	~ZombieEvent();
	void 	    setZombieType(std::string type);
	Zombie*     newZombie(std::string name);
	Zombie*     randomChump(void);

protected:
    static std::string names[FIELDS];
    
private:
	std::string 	_type;
};

#endif