#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <string>
# include <cstring>
# include <climits>

class				Conversion {
public:
	Conversion();
	~Conversion();
    Conversion(const Conversion &);
	Conversion	&operator=(const Conversion &);
    void			convToInt(std::string src);
    void			convToChar(std::string src);
    void			convToFloat(std::string src);
    void			convToDouble(std::string src);
};

#endif