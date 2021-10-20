/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 12:28:23 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/03 14:26:38 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include "ISpaceMarine.hpp"

class                       AssaultTerminator : public ISpaceMarine {
public:
	AssaultTerminator();
	AssaultTerminator			&operator=(const AssaultTerminator &);
	AssaultTerminator(const AssaultTerminator &);
	virtual ~AssaultTerminator();
	virtual AssaultTerminator	*clone() const;
	virtual void			battleCry() const;
	virtual void			rangedAttack() const;
	virtual void			meleeAttack() const;
};

#endif