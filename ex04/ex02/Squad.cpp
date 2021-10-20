/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@42.ru>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 12:29:12 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/06 19:42:34 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad () : _squad(0), _size(0) {}

Squad *   Squad::operator=(const Squad *  src) 
{
    int i = 0;
    if (this != src)
	{
		if (this->_squad != 0)
		{
            while (i < this->_size)
            {
                delete _squad[i];
                i++;
            }
			delete [] _squad;
		}
        this->_size = src->_size;
		if (src->_squad != 0)
		{
			this->_squad = new ISpaceMarine*[_size];
            i = 0;
            while (i < src->getCount())
            {
                this->_squad[i] = src->_squad[i]->clone();
                i++;
            }
		}
	}
	return this;
}

Squad::Squad(const Squad &src) 
{
    *this = src;
}

Squad::~Squad() {
    int i = 0;
    while (i < this->_size)
    {
        delete (this->_squad[i]);
        i++;
    }
    if (this->_squad)
        delete [] _squad;
}

int	            Squad::getCount() const 
{
    return (this->_size);
}

ISpaceMarine	*Squad::getUnit(int i) const 
{
    if (i < 0 || i >= this->_size)
		return NULL;
    return (this->_squad[i]);
}

int				Squad::push(ISpaceMarine *marine) 
{
    if (marine)
    {
        if (!this->_squad) 
        {
            this->_squad = new ISpaceMarine*[1];
            this->_squad[0] = marine;
		    this->_size += 1;
            return (this->_size);
        }
        int i = 0;
        while (i < this->_size)
        {
		    if (this->_squad[i] == marine)
			    return(this->_size);
            i++;
	    }
	    ISpaceMarine	**cpy = new ISpaceMarine*[this->_size + 1];
        i = 0;
        while (i < this->_size)
        {
            cpy[i] = this->_squad[i];
            i++;
        }
        i = 0;
	    delete [] this->_squad;
	    this->_squad = cpy;
	    this->_squad[this->_size] = marine;
	    this->_size += 1;
    }
	return (this->_size);
}