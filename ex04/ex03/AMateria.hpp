/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@42.ru>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 19:56:28 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/06 21:13:52 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"

class ICharacter;

class                   AMateria {
private:
	unsigned int	    _xp;
	std::string		    _MatType;

public:
	AMateria();
	AMateria(std::string const &);
	AMateria			&operator=(const AMateria &);
	AMateria(const AMateria &);
	virtual ~AMateria();
	std::string const	&getMatType() const;
	unsigned int		getXP() const;
	virtual AMateria	*clone() const = 0;
	virtual void		use(ICharacter &target);
};

#endif