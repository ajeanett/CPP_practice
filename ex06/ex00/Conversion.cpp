#include "Conversion.hpp"
#include <math.h>

static void checkPseudoLit(std::string src)
{
    if (src == "nanf"	|| src == "+inff"	|| src == "-inff"	||
		src == "nan"	|| src == "+inf"	|| src == "-inf")
	{
		std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        if (src == "nan" || src == "+inf" || src == "-inf")
        {
            std::cout << "float: " << src << "f" << std::endl;
            std::cout << "double: " << src << std::endl;
        }
        else if (src == "nanf"	|| src == "+inff"	|| src == "-inff")
        {
            std::cout << "float: " << src << std::endl;
            std::cout << "double: " << src.substr(0, src.length() - 1) << std::endl;
        }
        exit(0);
	}
    return ;
}
static int checkImpossible(std::string src)
{
    if (src.size() > 1 && !isdigit(src[0]) && !isdigit(src[1]))
    {
        std::cout << "impossible" << std::endl;
        return 1;
    }
    return 0;
}

Conversion::Conversion() {
}

Conversion::~Conversion() {
}

Conversion::Conversion(const Conversion &src){
	*this = src;
}

Conversion	&Conversion::operator=(const Conversion &src) {
    (void)src;
	return (*this);
}

void			Conversion::convToChar(std::string src){
    double i;
    checkPseudoLit(src);
    std::cout << "char: ";
    if (checkImpossible(src))
        return ;
    if (src.size() == 1 && !isdigit(src[0])) {
        i = static_cast<double>(src[0]);
    }
    else
    {
        i = atof(src.c_str());
    }
    if (isinf(i) || isnan(i) || i < 0 || i > 255) {
        std::cout << "impossible" << std::endl;
        return ;
    }
    if (i < 32 || i > 126) {
        std::cout << "Non displayable" << std::endl;
        return ;
    }
    char c = static_cast<char>(i);
    std::cout<< "'" << c << "'" << std::endl;
}

void			Conversion::convToInt(std::string src){
    double d;
    std::cout << "int: ";
    if (checkImpossible(src))
        return ;
    if (src.length() == 1 && !isdigit(src[0])) {
        d = static_cast<double>(src[0]);
    }
    else
        d = atof(src.c_str());
	if (isnan(d) || d < static_cast<double>(INT_MIN) || d > static_cast<double>(INT_MAX))
    {
        std::cout << "impossible" << std::endl;
        return ;
    }
	int i = static_cast<int>(d);
	std::cout << i << std::endl;
}

void			Conversion::convToFloat(std::string src) {
    std::cout << "float: ";

    float f;
    if (checkImpossible(src))
        return ;
    if (src.length() == 1 && !isdigit(src[0])) {
        f = static_cast<float>(src[0]);
    }
    else
        f = static_cast<float>(atof(src.c_str()));
    if (src == "nan" || isnan(f))
    {
        std::cout << "nanf" << std::endl;
        return ;
    }
    if (isinf(f)) {
        std::cout << f << "f" << std::endl;
        return ;
    }
    if (floor(f) == f) {
        std::cout << f << ".0f" << std::endl;
        return ;
    }
    std::cout << f << "f" << std::endl;
}

void			Conversion::convToDouble(std::string src) {
    std::cout << "double: ";
    double d;

    if (checkImpossible(src))
        return ;
    if (src.length() == 1 && !isdigit(src[0])) {
        d = static_cast<double>(src[0]);
    }
    else
        d = atof(src.c_str());
    if (src == "nan" || isnan(d))
    {
        std::cout << "nan" << std::endl;
            return ;
    }
    if (isinf(d)) {
        std::cout << d << std::endl;
        return ;
    }
    if (floor(d) == d) {
        std::cout << d << ".0" << std::endl;
        return ;
    }
    std::cout << d << std::endl;
}
