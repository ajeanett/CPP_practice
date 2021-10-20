#include "Conversion.hpp"

int		main(int argc, char **argv) {
	
    if (argc != 2) {
		std::cout << "Error: you need one argument!" << std::endl;
		return 0;
	}

    std::string arg(argv[1]);
	Conversion convert;
    convert.convToChar(arg);
    convert.convToInt(arg);
    convert.convToFloat(arg);
    convert.convToDouble(arg);

	return 0;
}