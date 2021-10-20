#include "iter.hpp"
#include <iomanip>

int     main() {
	


    std::cout << "*********   TEST STRING   *********" << std::endl << std::endl;
	{
		std::string str[] = {"Lorem ipsum dolor sit amet", "Veni vidi vici", "Dum spiro spero"};
		iter(str, 3, my_out);
	}
	std::cout << "*********   TEST CHAR  *********" << std::endl << std::endl;
	{
		char		a[] = {'a', 'b', 'c', 'd', '\0'};
		iter(a, 4, my_out);
	}
	std::cout << "*********   TEST INT  *********" << std::endl << std::endl;
	{
		int i[] = {2, 4, 8, 16, 32, 64};
		iter(i, 6, my_out);
	}
    std::cout << "*********   TEST FLOAT  *********" << std::endl << std::endl;
	{
		std::cout << std::setprecision(16);
		float f[] = {42.5f, 1685.23f, 14597.164544f};
		iter<float>(f, 3, my_out);
	}
	std::cout << "*********   TEST DOUBLE *********" << std::endl << std::endl;
	{
		double d[] = {4566.7, 3545.75, 456.77, 465444.22226};
		iter(d, 4, my_out);
	}
    
	return (0);
}