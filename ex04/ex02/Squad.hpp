/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 12:29:36 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/03 19:18:57 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

class				Squad : public ISquad 
{
private:
	ISpaceMarine	**_squad;
	int				_size;
public:
	Squad();
    virtual ~Squad();
    Squad *  operator=(const Squad *  src);
	Squad(const Squad &);
	virtual int				getCount() const;
	virtual ISpaceMarine	*getUnit(int) const;
	virtual int				push(ISpaceMarine *);
};

#endif