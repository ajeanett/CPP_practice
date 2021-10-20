/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@42.ru>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 18:51:00 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/06 21:57:05 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Monster.hpp"
#include "Peon.hpp"
#include <iostream>

int main(void)
{

    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    std::cout << robert << jim << joe;
    robert.polymorph(jim);
    robert.polymorph(joe);

    // Monster fiona("Fiona");
    // robert.polymorph(fiona);
    // std::cout << std::endl << std::endl;

    // Sorcerer elric("Elric", "the Avenger");
    // Victim bandit("Banderas");
    // Peon harry("Harry");

    // std::cout << elric;
    // elric.polymorph(bandit);
    // elric.polymorph(harry);


    return 0;
}