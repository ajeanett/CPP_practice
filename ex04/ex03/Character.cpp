/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@42.ru>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 19:56:34 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/06 21:02:07 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("Player") 
{
    int i = 0;
    while (i < 4)
    {
        _inventory[i] = 0;
        i++;
    }
    
}

Character::Character(std::string const &name): _name(name)  
{
    int i = 0;
    while (i < 4)
    {
        _inventory[i] = 0;
        i++;
    }
    
}

Character::~Character() 
{
    int i = 0;
    while (i < 4)
    {
        if (this->_inventory[i])
        {
            delete _inventory[i];
            _inventory[i] = 0;
        }
        i++;
    }
}

Character			&Character::operator=(const Character &src) 
{
    if (this != &src)
    {
        int i = 0;
        this->_name = src._name;

        while (i < 4)
        {
            if (_inventory[i])
                _inventory[i] = 0;
            if (src._inventory[i])
                _inventory[i] = src._inventory[i]->clone();
            i++;
        }
    }
    return (*this);
}

Character::Character(const Character &src) 
{
    *this = src;
}

std::string const	&Character::getName() const 
{
	return (this->_name);
}

void    Character::equip(AMateria *m) 
{
    int i = 0;
    while (i < 4)
    {
        if (_inventory[i] == 0)
        {
            _inventory[i] = m;
            break;
        }
        i++;
    }
}

void				Character::unequip(int idx) 
{
	if (idx >= 0 && idx < 4)
        this->_inventory[idx] = 0;
}

void				Character::use(int idx, ICharacter &target) 
{
    if (idx >= 0 && idx < 4)
    {
        if (_inventory[idx])
            this->_inventory[idx]->use(target);
    }
}