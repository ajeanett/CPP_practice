/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@42.ru>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 19:56:42 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/06 20:22:42 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class           Cure : public AMateria 
{
public:
    Cure();
    Cure                 &operator=(const Cure &);
    Cure(const Cure &);
    virtual ~Cure();
    virtual Cure         *clone() const;
    virtual void		use(ICharacter &);
};

#endif