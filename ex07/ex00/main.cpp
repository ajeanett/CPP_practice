# include <iostream>
# include <string>
# include "whatever.hpp"
# include <climits>
# include <cfloat>

int		main(void) {


    std::cout << "*******   SUBJECT TEST   *******" << std::endl;
	{
		int a = 2;
		int b = 3;

		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

		std::string c = "chaine1";
		std::string d = "chaine2";

		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	}

    std::cout << "*********   TEST INT   *********" << std::endl << std::endl;
	{
		int		a = 42;
		int		b = 21;
		std::cout << "a = " << a << " b = " << b << std::endl;
        std::cout << "swap: ";
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b  << std::endl;
		std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
		std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

		a = INT_MAX;
		b = INT_MIN;
        std::cout << "Check INT_MAX and INT_MIN" << std::endl;
		std::cout << "a = " << a << ", b = " << b  << std::endl;
        std::cout << "swap: ";
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b  << std::endl;
		std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
		std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
		std::cout << "min(5, 7) = " << ::min(5, 7) << std::endl;
		std::cout << "max(5, 7) = " << ::max(5, 7) << std::endl << std::endl;
	}

    std::cout << "*********   TEST DOUBLE  *********" << std::endl << std::endl;
	{
		double		a = 10.42;
		double		b = 21.42;
		std::cout << "a = " << a << " b = " << b << std::endl;
        std::cout << "swap: ";
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b  << std::endl;
		std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
		std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

		a = DBL_MAX;
		b = DBL_MIN;
        std::cout << "Check DBL_MAX and DBL_MIN" << std::endl;
		std::cout << "a = " << a << ", b = " << b  << std::endl;
        std::cout << "swap: ";
		::swap<double>(a, b);
		std::cout << "a = " << a << ", b = " << b  << std::endl;
		std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
		std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
		std::cout << "min(23.10, 44.0) = " << ::min(23.10, 44.0) << std::endl;
		std::cout << "max(23.10, 44.0) = " << ::max(23.10, 44.0) << std::endl << std::endl;
	}

    std::cout << "*********   TEST FLOAT  *********" << std::endl << std::endl;
	{
		float		a = 10.42f;
		float		b = 21.42f;
		std::cout << "a = " << a << " b = " << b << std::endl;
        std::cout << "swap: ";
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b  << std::endl;
		std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
		std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

		a = FLT_MAX;
		b = FLT_MIN;
        std::cout << "Check FLT_MAX and FLT_MIN" << std::endl;
		std::cout << "a = " << a << ", b = " << b  << std::endl;
        std::cout << "swap: ";
		::swap<float>(a, b);
		std::cout << "a = " << a << ", b = " << b  << std::endl;
		std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
		std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
		std::cout << "min(5.3f, 7.9f) = " << ::min(5.3f, 7.9f) << std::endl;
		std::cout << "max(5.3f, 7.9f) = " << ::max(5.3f, 7.9f) << std::endl << std::endl;
	}

    std::cout << "*********   TEST CHAR  *********" << std::endl << std::endl;
	{
		char		a = 'a';
		char		b = 'B';
		std::cout << "a = " << a << " b = " << b << std::endl;
        std::cout << "swap: ";
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b  << std::endl;
		std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
		std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

		a = 'x';
		b = 'z';
		std::cout << "a = " << a << ", b = " << b  << std::endl;
        std::cout << "swap: ";
		::swap<char>(a, b);
		std::cout << "a = " << a << ", b = " << b  << std::endl;
		std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
		std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
		std::cout << "min('d', 'e') = " << ::min('d', 'e') << std::endl;
		std::cout << "max'd', 'e') = " << ::max('d', 'e') << std::endl << std::endl;
	}

	//     std::cout << "*********   TEST CLASS  *********" << std::endl << std::endl;
	// {
	// 	Awesome		a(42);
	// 	Awesome		b(21);
	// 	std::cout << "a = " << a.getN() << " b = " << b.getN() << std::endl;
    //     std::cout << "swap: ";
	// 	::swap<Awesome>(a, b);
	// 	std::cout << "a = " << a.getN() << ", b = " << b.getN()  << std::endl;
	// 	std::cout << "min(a, b) = " << ::min<Awesome>(a, b).getN() << std::endl;
	// 	std::cout << "max(a, b) = " << ::max<Awesome>(a, b).getN() << std::endl;
	// }

	return 0;
}