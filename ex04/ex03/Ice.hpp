/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@42.ru>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 19:56:47 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/06 20:22:56 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class           Ice : public AMateria {
public:
    Ice();
    Ice                 &operator=(const Ice &);
    Ice(const Ice &);
    virtual ~Ice();
    virtual Ice         *clone() const;
    virtual void		use(ICharacter &);
};

#endif