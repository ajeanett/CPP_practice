#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>
#include <string>

class Fixed
{
public:
	Fixed();
    ~Fixed();
    Fixed(Fixed const &src);
    Fixed &operator=(Fixed const &source);
	int 			        getRawBits( void ) const;
    void 					setRawBits(int const raw);

private:
	int     _fvalue;
    static const int    _bits = 8;
};

#endif