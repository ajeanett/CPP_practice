/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 14:06:47 by ajeanett          #+#    #+#             */
/*   Updated: 2021/03/28 14:48:59 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>
#include <sstream>

class Brain
{
public:
	Brain();
	~Brain();

	void                setVolume(unsigned int volume);
	unsigned int        getVolume();

	std::string         identify() const;

private:
	unsigned int _volume;
};

#endif