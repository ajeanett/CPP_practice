#include "Bureaucrat.hpp"

void low_grade_error()
{
    Bureaucrat charlie ("Charlie", 148);
    charlie.decrGrade();
    std::cout << charlie;
    charlie.decrGrade();
    std::cout << charlie;
    charlie.decrGrade();
}

int main() 
{

    try {
        Bureaucrat joe ("Joe", 158);
        std::cout << "Success" << std::endl;
        std::cout << joe; // Never be printed
    }
    catch (std::exception &e) 
    {
        std::cerr << e.what() << std::endl;
    }

    try {
        Bureaucrat nick ("Nick", 1);
        std::cout << nick;
        nick.incrGrade();
        std::cout << nick;
        std::cout << "Success" << std::endl;
    }
    catch (std::exception &e) 
    {
        std::cerr << e.what() << std::endl;
    }

    try 
    {
       low_grade_error();
       std::cout << "Success" << std::endl;
    }
    catch (std::exception &e) 
    {
        std::cerr << e.what() << std::endl;
    }

    try 
    {
        Bureaucrat b ("Manager", 2);
        std::cout << b;
        b.incrGrade();
        std::cout << b;
        b.incrGrade();
        std::cout << b;
        std::cout << "Success" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return (0);
}