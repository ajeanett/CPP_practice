/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 16:16:23 by ajeanett          #+#    #+#             */
/*   Updated: 2021/03/29 13:16:53 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int     main(void)
{
    ZombieEvent     ev;
    Zombie          *zombie;
    Zombie          z_stack("Stack", "Catapult Zombie");
    
    srand(4239);
    z_stack.announce();

    zombie = ev.newZombie("Hero");
	zombie->announce();
	delete zombie;
    
    ev.setZombieType("Flag Zombie");
	for (int i =0; i<5; i++)
	{
		zombie = ev.randomChump();
		delete zombie;
	}
    std::cout << std::endl;

    ev.setZombieType("Newspaper Zombie");
	for (int i =0; i<5; i++)
	{
		zombie = ev.randomChump();
		delete zombie;
	}
    
    ev.setZombieType("Dancing Zombie");
 	for (int i =0; i<5; i++)
	{
		zombie = ev.randomChump();
		delete zombie;
	}
    
    return (0);
}