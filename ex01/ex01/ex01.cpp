/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 16:11:38 by ajeanett          #+#    #+#             */
/*   Updated: 2021/03/27 16:14:13 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void memoryLeak()
{
	std::string  *panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete panther;
}

int main(void)
{
	memoryLeak();
	return (0);
}