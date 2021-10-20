#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Frog"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if ((grade) < 1)
		throw (Bureaucrat::GradeTooHighException());
	if ((grade) > 150)
		throw (Bureaucrat::GradeTooLowException());
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src._name) 
{ 
	*this = src; 
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src)
{
	if (this != &src)
		_grade = src._grade;
	return (*this);
}

std::string		Bureaucrat::getName() const 
{
    return (this->_name);
}

int				Bureaucrat::getGrade() const 
{
	return (this->_grade);
}

const char* Bureaucrat::GradeTooHighException::what() const throw() 
{
	return ("The grade too high!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() 
{
	return ("The grade too low!");
}

void    Bureaucrat::incrGrade() 
{
	if ((this->_grade - 1) < 1)
		throw (Bureaucrat::GradeTooHighException());
	this->_grade--;
}

void    Bureaucrat::decrGrade()
{
	if ((this->_grade + 1) > 150)
		throw (Bureaucrat::GradeTooLowException());
	this->_grade++;
}

std::ostream		&operator<<(std::ostream &o, const Bureaucrat &src) 
{
	o << src.getName() + ", bureaucrat grade " << src.getGrade() << std::endl;
	return (o);
}

