/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 13:45:09 by ajeanett          #+#    #+#             */
/*   Updated: 2021/03/28 13:52:33 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *pointer = &string;
	std::string &reference = string;
    
	std::cout << "Pointer  : " << *pointer << std::endl;
	std::cout << "Reference: " << reference << std::endl;
    
	return (0);
}