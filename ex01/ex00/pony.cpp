/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 13:56:02 by ajeanett          #+#    #+#             */
/*   Updated: 2021/03/27 16:08:25 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pony.hpp"

Pony::Pony( std::string	name, std::string color) : _name(name), _color(color)
{
    std::cout << this->_name + " says hello!" << std::endl;
    this->_health = 100;
    this->_strenght = 100;
    this->_intelligence = 100;
    
    return;
}

Pony::~Pony( void )
{
    std::cout << this->_name + " says goodbye!" << std::endl;
    return;
}

std::string Pony::fields[NUM_OF_FIELDS] =
{
	"Pony name",
	"Pony color",
	"Pony health",
	"Pony strenght",
	"Pony intelligence"
};

void    Pony::print_parameters(void)
{
    std::cout << fields[0] <<  " : " << this->_name << std::endl;
	std::cout << fields[1] <<  " : " << this->_color << std::endl;
	std::cout << fields[2] <<  " : " << this->_health << std::endl;
	std::cout << fields[3] <<  " : " << this->_strenght << std::endl;
	std::cout << fields[4] <<  " : " << this->_intelligence << std::endl;
}

void    Pony::eat(void)
{
    this->_health = this->_health + 20;
    std::cout << this->_name <<  " ate and feels so happy! "<< std::endl;
}

void    Pony::sleep(void)
{
    this->_health = this->_health + 50;
    std::cout << this->_name <<  " slept all day and feels rested!"<< std::endl;
}

void    Pony::work(void)
{
    this->_health = this->_health - 60;
    if (this->_health > 0)
        std::cout << this->_name <<  " has worked and wants to eat and sleep!"<< std::endl;
    else
        std::cout << this->_name <<  " died!"<< std::endl;
}

void    Pony::play(void)
{
    std::cout << this->_name <<  " has fun playing with friends!"<< std::endl;
}