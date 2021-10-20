/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 16:26:41 by ajeanett          #+#    #+#             */
/*   Updated: 2021/03/28 13:27:50 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <string>
# include <iostream>

# define NUM_OF_FIELDS 5

class Zombie
{

public:
    Zombie();
	Zombie(std::string _name, std::string _type);
	~Zombie();
	void 	announce();
	void	setZombieName(std::string &name);
	void	setZombieType(std::string type);

protected:
    static std::string phrase[NUM_OF_FIELDS];
    
private:
	std::string		_name;
	std::string 	_type;
};

#endif