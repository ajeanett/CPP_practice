/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@42.ru>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 19:56:31 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/06 21:00:43 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _xp(0), _MatType("default") {}

AMateria::AMateria(std::string const &type): _xp(0), _MatType(type) {}

AMateria::~AMateria() {}

AMateria			&AMateria::operator=(const AMateria &src) 
{
    if (this != &src)
    {
        this->_MatType = src._MatType;
        this->_xp = src._xp;
    }
    return (*this);
}

AMateria::AMateria(const AMateria &src) 
{
    *this = src;
}


std::string const	&AMateria::getMatType() const 
{
    return (this->_MatType);
}

unsigned int		AMateria::getXP() const 
{
    return (this->_xp);
}

void        		AMateria::use(ICharacter &target) 
{
    this->_xp += 10;
    (void)target;
}