#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>
#include <cmath>

class Fixed
{
public:
	Fixed();
    ~Fixed();
    Fixed(int const src);
	Fixed(float const src);
    Fixed(Fixed const &src);
    Fixed &operator=(Fixed const &source);
	int 			        getRawBits( void ) const;
    void 					setRawBits(int const raw);
    int                     toInt() const;
	float                   toFloat() const;

private:
	int     _fvalue;
    static const int    _bits = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif