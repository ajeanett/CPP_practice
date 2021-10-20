/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 12:57:17 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/01 18:46:54 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include <ctime>
#include <unistd.h>

int main(void)
{


	// srand(time(0));
    srand(time(0));

    FragTrap cyborg;
    ScavTrap cyborg2("Master");
    NinjaTrap ninja("Hattori Hanzo");
	std::string target("C3PO");
    std::string target2("Sith Lord");
    std::string player("you");

	std::cout << "Fight!" << std::endl;
    cyborg.meleeAttack(target);
	cyborg.rangedAttack(target);
    cyborg2.meleeAttack(target);
	cyborg2.rangedAttack(target);
    cyborg.print_parameters();
	cyborg.vaulthunter_dot_exe(target);
	cyborg.takeDamage(40);
    cyborg.print_parameters();
	cyborg.vaulthunter_dot_exe(target2);
    cyborg.rangedAttack(target);
	cyborg.takeDamage(70);
    cyborg.print_parameters();
    cyborg2.takeDamage(20);
	cyborg.beRepaired(85);
    cyborg.print_parameters();
    cyborg.takeDamage(20);
    cyborg.print_parameters();
    cyborg2.takeDamage(20);
    cyborg.meleeAttack(target2);
    cyborg.beRepaired(185);
	cyborg.vaulthunter_dot_exe(target2);
	cyborg.vaulthunter_dot_exe(target);
	cyborg.vaulthunter_dot_exe(target);
    cyborg.vaulthunter_dot_exe(target);
    cyborg2.challengeNewcomer(player);
    cyborg2.challengeNewcomer(player);
    cyborg2.challengeNewcomer(player);
    cyborg2.challengeNewcomer(player);
    cyborg2.challengeNewcomer(player);
    cyborg2.challengeNewcomer(player);
    cyborg.print_parameters();
    cyborg2.print_parameters();
    ninja.ninjaShoebox(cyborg2);
    ninja.ninjaShoebox(cyborg2);
    ninja.ninjaShoebox(cyborg);
    ninja.ninjaShoebox(cyborg);
	std::cout << "The end!" << std::endl;

    return 0;
}