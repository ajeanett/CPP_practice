/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 12:29:55 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/03 18:41:49 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() {
    std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine			&TacticalMarine::operator=(const TacticalMarine &src) 
{
    (void)src;
    std::cout << "Tactical Marine ready for battle!" << std::endl;
    return (*this);
}

TacticalMarine::TacticalMarine(const TacticalMarine &src) 
{
    // (void)src;
    *this = src;
    std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine() 
{
	std::cout << "Aaargh..." << std::endl;
}

TacticalMarine			*TacticalMarine::clone() const 
{
	TacticalMarine* clone = new TacticalMarine(*this);
	return (clone);
}

void					TacticalMarine::battleCry() const {
	std::cout << "For the holy PLOT!" << std::endl;
}

void					TacticalMarine::rangedAttack() const {
	std::cout << "* attacks with a bolter *" << std::endl;	
}

void					TacticalMarine::meleeAttack() const {
	std::cout << "* attacks with a chainsword *" << std::endl;	
}