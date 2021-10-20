#include "phonebook.class.hpp"

bool only_digits(const std::string s)
{
  return (s.find_first_not_of( "0123456789" ) == std::string::npos);
}

PhoneBook::PhoneBook( void )
{
    // std::cout << " Constructor called" << std::endl;
    return;
}

PhoneBook::~PhoneBook( void )
{
    // std::cout << " Destructor called" << std::endl;
    return;
}

std::string	PhoneBook::get_firstName(void) const
{
	return (this->_firstName);
}

std::string	PhoneBook::get_lastName(void) const
{
	return (this->_lastName);
}

std::string	PhoneBook::get_nickName(void) const
{
	return (this->_nickName);
}

void	PhoneBook::set_login(std::string login) { this->_login = login;} 

void	PhoneBook::set_firstName(std::string firstName)
{
    this->_firstName = firstName;
	return;
}

void	PhoneBook::set_lastName(std::string lastName)
{
    this->_lastName = lastName;
	return;
}

void	PhoneBook::set_nickName(std::string nickName)
{
    this->_nickName = nickName;
	return;
}

void	PhoneBook::set_postalAddress(std::string postalAddress)
{
    this->_postalAddress = postalAddress;
	return;
}

void	PhoneBook::set_favoriteMeal(std::string favoriteMeal)
{
    this->_favoriteMeal = favoriteMeal;
	return;
}

void	PhoneBook::set_underwearColor(std::string underwearColor)
{
    this->_underwearColor = underwearColor;
	return;
}

void	PhoneBook::set_darkestSecret(std::string darkestSecret)
{
    this->_darkestSecret = darkestSecret;
	return;
}

void	PhoneBook::set_phoneNumber(std::string phoneNumber)
{
    this->_phoneNumber = phoneNumber;
	return;
}

void	PhoneBook::set_birthdayDate(std::string birthdayDate)
{
    this->_birthdayDate = birthdayDate;
	return;
}

void	PhoneBook::set_emailAddress(std::string emailAddress)
{
    this->_emailAddress = emailAddress;
	return;
}

void    PhoneBook::add_contact(void)
{
    std::string input;

    std::cout << "\033[1;34mPlease, enter login of new contact:\033[0m" << std::endl;
    getline(std::cin, input);
    set_login(input);
    input.clear();

    while(true && !(std::cin.eof()))
    {
        std::cout << "\033[1;34mPlease, enter first name of new contact:\033[0m" << std::endl;
        getline(std::cin, input);
        if (input.empty() == false)
        {
            set_firstName(input);
            break;
        }
        else
            std::cout << "\033[31;1mFirst name is empty\033[0m" << std::endl;
    }

    while(true && !(std::cin.eof()))
    {
        std::cout << "\033[1;34mPlease, enter last name of new contact:\033[0m" << std::endl;
        getline(std::cin, input);
        if (input.empty() == false)
        {
            set_lastName(input);
            break;
        }
        else
            std::cout << "\033[1;31mLast name is empty\033[0m" << std::endl;
    }

    while(true && !(std::cin.eof()))
    {
        std::cout << "\033[1;34mPlease, enter nickname of new contact:\033[0m" << std::endl;
        getline(std::cin, input);
        if (input.empty() == false)
        {
            set_nickName(input);
            break;
        }
        else
            std::cout << "\033[1;31mNickname is empty\033[0m" << std::endl;
    }

    std::cout << "\033[1;34mPlease, enter postal address of new contact:\033[0m" << std::endl;
    getline(std::cin, input);
    set_postalAddress(input);

    std::cout << "\033[1;34mPlease, enter email address of new contact:\033[0m" << std::endl;
    getline(std::cin, input);
    set_emailAddress(input);

    while(true && !(std::cin.eof()))
    {
        std::cout << "\033[1;34mPlease, enter phone number new contact:\033[0m" << std::endl;
        getline(std::cin, input);
        if (input.length() == 10)
        {
            if (only_digits(input))
            {
                set_phoneNumber(input);
                break;
            }
        }
        else
            std::cout << "\033[1;31mPhone number must consist of ten digits\033[0m" << std::endl;
    }

    std::cout << "\033[1;34mPlease, enter birthday date of new contact:\033[0m" << std::endl;
    getline(std::cin, input);
    set_birthdayDate(input);

    std::cout << "\033[1;34mPlease, enter favorite meal of new contact:\033[0m" << std::endl;
    getline(std::cin, input);
    set_favoriteMeal(input);

    std::cout << "\033[1;34mPlease, enter underwear color of new contact:\033[0m" << std::endl;
    getline(std::cin, input);
    set_underwearColor(input);

    std::cout << "\033[1;34mPlease, enter darkest secret of new contact:\033[0m" << std::endl;
    getline(std::cin, input);
    set_darkestSecret(input);

    std::cout << "\033[1;32;4m New contact added successfully\033[0m" << std::endl << std::endl;
    
}

void	PhoneBook::writeContact(void)
{
    std::cout << "\033[1;96mLogin\033[0m - " << this->_login << std::endl;
	std::cout << "\033[1;96mFirst Name\e[0m - " << this->_firstName << std::endl;
	std::cout << "\033[1;96mLast Name\33[0m - " << this->_lastName << std::endl;
	std::cout << "\033[1;96mNick Name\33[0m - " << this->_nickName << std::endl;
	std::cout << "\033[1;96mPostal Address\033[0m - " << this->_postalAddress << std::endl;
	std::cout << "\033[1;96mEmail Address\033[0m - " << this->_emailAddress << std::endl;
	std::cout << "\033[1;96mPhone Number\033[0m - " << this->_phoneNumber << std::endl;
	std::cout << "\033[1;96mBirthday Date\033[0m - " << this->_birthdayDate << std::endl;
	std::cout << "\033[1;96mFavorite Meal\033[0m - " << this->_favoriteMeal << std::endl;
	std::cout << "\033[1;96mUnderwear Color\033[0m - " << this->_underwearColor << std::endl;
	std::cout << "\033[1;96mDarkest Secret\033[0m - " << this->_darkestSecret << std::endl << std::endl;
	return ;
}