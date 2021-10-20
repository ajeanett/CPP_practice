/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 16:26:41 by ajeanett          #+#    #+#             */
/*   Updated: 2021/03/27 19:03:02 by ajeanett         ###   ########.fr       */
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

protected:
    static std::string phrase[NUM_OF_FIELDS];
    
private:
	std::string		_name;
	std::string 	_type;
};

#endif