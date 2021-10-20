/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UltraMarine.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 12:28:23 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/03 19:21:56 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ULTRAMARINE_HPP
# define ULTRAMARINE_HPP

# include "ISpaceMarine.hpp"

class                       UltraMarine : public ISpaceMarine {
public:
	UltraMarine();
	UltraMarine			&operator=(const UltraMarine &);
	UltraMarine(const UltraMarine &);
	virtual ~UltraMarine();
	virtual UltraMarine	*clone() const;
	virtual void			battleCry() const;
	virtual void			rangedAttack() const;
	virtual void			meleeAttack() const;
};

#endif