/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 14:06:43 by ajeanett          #+#    #+#             */
/*   Updated: 2021/03/28 15:06:06 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() 
{
    this->_volume = 1500;
}

Brain::~Brain() {}

unsigned int        Brain::getVolume()
{ 
    return (this->_volume);
}

void                Brain::setVolume(unsigned int volume) 
{ 
    this->_volume = volume;
}

std::string         Brain::identify() const
{
	std::stringstream addr;
	addr << this;
	return (addr.str());
}