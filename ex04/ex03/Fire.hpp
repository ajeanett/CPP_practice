/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fire.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@42.ru>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 19:56:42 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/06 21:15:02 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIRE_HPP
# define FIRE_HPP

# include "AMateria.hpp"

class           Fire : public AMateria 
{
public:
    Fire();
    Fire                 &operator=(const Fire &);
    Fire(const Fire &);
    virtual ~Fire();
    virtual Fire         *clone() const;
    virtual void		use(ICharacter &);
};

#endif