#include "fixed.class.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->_fvalue = 0;
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
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fvalue;
}

void Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_fvalue = raw;
}
