/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 18:49:21 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/02 19:41:25 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class           RadScorpion : public Enemy 
{
public:
	RadScorpion();
    RadScorpion(const RadScorpion &src);
	RadScorpion	&operator=(const RadScorpion &src);
	virtual ~RadScorpion();
};

#endif