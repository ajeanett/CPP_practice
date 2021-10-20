/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 13:56:10 by ajeanett          #+#    #+#             */
/*   Updated: 2021/03/27 16:06:21 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pony.hpp"

void    ponyOnTheHeap()
{
    std::cout << "Pony on the Heap" << std::endl;
    Pony    *Applejack = new Pony("Applejack", "orange");
    Applejack->work();
    Applejack->sleep();
    Applejack->print_parameters();
    delete Applejack;
}

void    ponyOnTheStack()
{
    std::cout << "Pony on the stack" << std::endl;
    Pony    Fluttershy("Fluttershy", "yellow");
    Fluttershy.play();
    Fluttershy.eat();
    Fluttershy.print_parameters();
}

int     main(void)
{
    ponyOnTheHeap();
    ponyOnTheStack();
    return (0);
}