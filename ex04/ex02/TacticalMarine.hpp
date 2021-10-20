/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 12:30:10 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/03 14:27:16 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include "ISpaceMarine.hpp"

class                       TacticalMarine : public ISpaceMarine {
public:
	TacticalMarine();
	TacticalMarine			&operator=(const TacticalMarine &);
	TacticalMarine(const TacticalMarine &);
	virtual ~TacticalMarine();
	virtual TacticalMarine	*clone() const;
	virtual void			battleCry() const;
	virtual void			rangedAttack() const;
	virtual void			meleeAttack() const;
};

#endif