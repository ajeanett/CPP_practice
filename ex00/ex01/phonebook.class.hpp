/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 12:24:44 by ajeanett          #+#    #+#             */
/*   Updated: 2021/03/26 23:24:33 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>

# define TRUE 1
# define FALSE 0

class			PhoneBook
{

public:
	PhoneBook(void); // конструктор
	~PhoneBook(void); //деструктор

	void	set_login(std::string login);
	void	set_firstName(std::string firstName);
	std::string	get_firstName(void) const;
	void	set_lastName(std::string lastName);
	std::string	get_lastName(void) const;
	void	set_nickName(std::string nickName);
	std::string	get_nickName(void) const;
	void	set_postalAddress(std::string postalAddress);
	void	set_emailAddress(std::string emailAddress);
	void	set_phoneNumber(std::string phoneNumber);
	void	set_birthdayDate(std::string birthdayDate);
	void	set_favoriteMeal(std::string favoriteMeal);
	void	set_underwearColor(std::string underwearColor);
	void	set_darkestSecret(std::string darkestSecret);
	void		add_contact(void);
	void		writeContact(void);

private:
	std::string	_login;
    std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
    std::string	_postalAddress;
    std::string	_emailAddress;
    std::string	_phoneNumber;
	std::string	_birthdayDate;
	std::string	_favoriteMeal;
    std::string	_underwearColor;
	std::string	_darkestSecret;
};

bool only_digits(const std::string s);

#endif