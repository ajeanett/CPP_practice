/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 13:56:06 by ajeanett          #+#    #+#             */
/*   Updated: 2021/03/27 16:09:57 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>
# include <iomanip>

# define NUM_OF_FIELDS 5

class			Pony
{

public:
	Pony(std::string	_name, std::string _color); // конструктор
	~Pony(void); //деструктор
    void        print_parameters();
    void        eat();
    void        sleep();
    void        work();
    void        play();

protected:
    static std::string fields[NUM_OF_FIELDS];

private:
	std::string	_name;
    std::string	_color;
    int         _health;
    int         _strenght;
    int         _intelligence;
};

#endif