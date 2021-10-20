#include "fixed.class.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->_fvalue = 0;
}

Fixed::Fixed(const int src) {
	std::cout << "Int constructor called" << std::endl;
	this->_fvalue = src << _bits;
}

Fixed::Fixed(const float src) {
	std::cout << "Float constructor called" << std::endl;
	this->_fvalue = roundf(src * (1 << _bits));
}

Fixed::~Fixed() {
	std::cout  <<  "Destructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed &Fixed::operator=(Fixed const &src) {
	std::cout << "Assignation operator called" << std::endl;
    if (this == &src)
	    return *this;
    this->_fvalue = src.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const {
	// std::cout << "getRawBits member function called" << std::endl;
	return this->_fvalue;
}

void Fixed::setRawBits( int const raw ) {
	// std::cout << "setRawBits member function called" << std::endl;
	this->_fvalue = raw;
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
    o << (rhs.toFloat());
    return o;
}

int	Fixed::toInt( void ) const {
	// std::cout << "toInt function called" << std::endl;
	return this->_fvalue >> _bits;
}

float	Fixed::toFloat() const {
	// std::cout << "toFloat function called" << std::endl;
	return (float)_fvalue / (1 << _bits);
}

