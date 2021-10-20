#include "Bureaucrat.hpp"
#include "Form.hpp"

void low_grade_error()
{
    Bureaucrat charlie ("Charlie", 148);
    charlie.decrGrade();
    std::cout << charlie;
    charlie.decrGrade();
    std::cout << charlie;
    charlie.decrGrade();
}

void normal()
{

}

int main() 
{

    // try {
    //     Bureaucrat nick ("Nick", 1);
    //     std::cout << nick;
    //     nick.incrGrade();
    //     std::cout << nick;
    // }
    // catch (std::exception &e) 
    // {
    //     std::cerr << e.what() << std::endl;
    // }

    // try 
    // {
    //    low_grade_error();
    // }
    // catch (std::exception &e) 
    // {
    //     std::cerr << e.what() << std::endl;
    // }

    // try 
    // {
    //     Bureaucrat b ("Manager", 2);
    //     std::cout << b;
    //     b.incrGrade();
    //     std::cout << b;
    //     b.incrGrade();
    //     std::cout << b;
    // }
    // catch (std::exception &e) 
    // {
    //     std::cerr << e.what() << std::endl;
    // }


    try {
        Bureaucrat man("Manager", 5);
        Bureaucrat boss("Boss", 97);
        Form    form1("Form1", 45, 10);
        Form    form2("Form2", 90, 80);
        Form    form3("Form3", 1, 1);
        Form    form4("Form4", 140, 140);
        std::cout << form1;
        // std::cout << form2;
        // std::cout << form3;
        std::cout << form4;
        man.signForm(form1);
        // man.signForm(form3);
        // boss.signForm(form2);
        boss.signForm(form4);
        std::cout << form1;
        // std::cout << form2;
        // std::cout << form3;
        std::cout << form4;
        // man.signForm(form1);
        // man.signForm(form3);
        // boss.signForm(form2);
        // boss.signForm(form4);
        std::cout << "Success" << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return (0);
}