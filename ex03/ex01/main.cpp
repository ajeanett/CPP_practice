/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 12:57:17 by ajeanett          #+#    #+#             */
/*   Updated: 2021/03/31 18:33:09 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <ctime>
#include <unistd.h>

int main(void)
{


	// srand(time(0));
    srand(time(0));

    FragTrap cyborg;
    ScavTrap cyborg2("Master");
	std::string target("C3PO");
    std::string target2("Sith Lord");
    std::string player("you");

	std::cout << "Fight!" << std::endl;
	cyborg.meleeAttack(target);
	cyborg.rangedAttack(target);
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
	std::cout << "The end!" << std::endl;

    return 0;
}