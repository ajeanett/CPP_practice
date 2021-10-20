/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 14:06:49 by ajeanett          #+#    #+#             */
/*   Updated: 2021/03/28 15:00:14 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
}

Human::~Human()
{ 
}

const Brain       &Human::getBrain() const
{ 
    return (this->_brain);
}

std::string Human::identify(void) const
{
	return (this->_brain.identify());
}