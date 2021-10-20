#include "span.hpp"
#include <list>

void print_vector(std::vector<int> testvector)
{
    std::vector<int>::iterator it;
    std::cout << "testvector : " ;
    for (it = testvector.begin(); it != testvector.end(); ++it)
        std::cout << *it << " " ;
    std::cout << std::endl;
}

int     main() {

    srand(time(0));

    std::cout << "*********   TEST SUBJECT *********" << std::endl << std::endl;
    try
    {
        Span sp = Span(5);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << "sp.shortestSpan() "<< sp.shortestSpan() << std::endl;
        std::cout <<"sp.longestSpan() "<< sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "*********   TEST NORMAL + SIZE EXCEPTION *********" << std::endl << std::endl;
    try
    {
        Span spa(5);
        spa.addNumber(5);
        spa.addNumber(2);
        std::cout <<"sp.shortestSpan() " <<spa.shortestSpan() << std::endl;
        std::cout <<"sp.longestSpan() "<<spa.longestSpan() << std::endl;
        spa.addNumber(99);
        spa.addNumber(-1);
        spa.addNumber(3);
        std::cout <<"sp.shortestSpan() " <<spa.shortestSpan() << std::endl;
        std::cout <<"sp.longestSpan() "<<spa.longestSpan() << std::endl;
        spa.addNumber(54);

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "*********   TEST LARGE AMOUNT *********" << std::endl << std::endl;
    try
    {
        Span sp = Span(20000);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout <<"sp.shortestSpan() " <<sp.shortestSpan() << std::endl;
        std::cout <<"sp.longestSpan() "<<sp.longestSpan() << std::endl;
        
        std::vector<int> v;
		for (int i=0; i < 5; ++i) {
			v.push_back(rand() % 20);
		}
        print_vector(v);
        sp.addNumber(v.begin(), v.end());
        std::cout <<"sp.shortestSpan() " <<sp.shortestSpan() << std::endl;
        std::cout <<"sp.longestSpan() "<<sp.longestSpan() << std::endl;
        for (int i=0; i < 1000; ++i) {
			v.push_back(rand() % INT_MAX);
		}
        print_vector(v);
        sp.addNumber(v.begin(), v.end());
        std::cout <<"sp.shortestSpan() " <<sp.shortestSpan() << std::endl;
        std::cout <<"sp.longestSpan() "<<sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
        std::cout << "*********   EXCEPTION ARG *********" << std::endl << std::endl;
    try
    {
        Span spa(5);
        spa.addNumber(5);
        std::cout <<"sp.shortestSpan() " <<spa.shortestSpan() << std::endl;
        std::cout <<"sp.longestSpan() "<<spa.longestSpan() << std::endl;
        spa.addNumber(99);
        spa.addNumber(54);
        spa.addNumber(3);
        spa.addNumber(-1);
        std::cout <<"sp.shortestSpan() " <<spa.shortestSpan() << std::endl;
        std::cout <<"sp.longestSpan() "<<spa.longestSpan() << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    return (0);
}