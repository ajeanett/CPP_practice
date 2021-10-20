#include "Form.hpp"

Form::Form(const std::string &name, const int &grade_to_sign, const int &grade_to_exec) :
_name(name), _signed(0), _grade_to_sign(grade_to_sign), _grade_to_exec(grade_to_exec)
{
	if (this->_grade_to_sign > 150 || this->_grade_to_exec > 150)
		throw(Form::GradeTooLowException());
	if (this->_grade_to_sign < 1 || this->_grade_to_exec < 1)
		throw(Form::GradeTooHighException());

}

Form::~Form() {}

Form::Form(Form const &src)
:
	_name(src._name),
	_signed(src._signed),
	_grade_to_sign(src._grade_to_sign),
	_grade_to_exec(src._grade_to_exec)
{}

Form &Form::operator=(Form const &src)
{
	if (this == &src)
		return (*this);
	_signed = src._signed;
	return (*this);
}

std::string 		Form::getName() const 
{
	return (this->_name);
}

int 				Form::get_grade_to_sign() const 
{
	return (this->_grade_to_sign);
}

int 				Form::get_grade_to_exec() const 
{
	return (this->_grade_to_exec);
}

bool				Form::getSign() const
{
	return (this->_signed);
}

const char* Form::GradeTooLowException::what() const throw() 
{
	return ("Too low grade for the Form!");
}

const char* Form::GradeTooHighException::what() const throw() 
{
	return ("Too high grade for the Form!");
}

const char* Form::SignedException::what() const throw() 
{
	return ("Form is already signed!");
}

const char* Form::UnsignedException::what() const throw() 
{
	return ("Form is unsigned!");
}

void	Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (_signed)
	{
		std::cout <<  bureaucrat.getName() << " cannot sign " << this->getName() << " because ";
		throw (Form::SignedException());
	}
	else if (bureaucrat.getGrade() <= this->_grade_to_sign)
	{
		std::cout << bureaucrat.getName() << " signs " << _name << std::endl;
		this->_signed = true;
	}
	else
	{
		std::cout <<  bureaucrat.getName() << " cannot sign " << this->getName() << " because ";
		throw (Form::GradeTooLowException());
	}
}

std::ostream		&operator<<(std::ostream &o, const Form &src) {
	o << "Form " + src.getName() + ", grade to signed is " << src.get_grade_to_sign() << ", grade to execute is " << src.get_grade_to_exec() << ", ";
	if (src.getSign())
		o << "form is signed!" << std::endl;
	else
		o << "form is unsigned!" << std::endl;
	return (o);
}

void		Form::execute(Bureaucrat const &executor) const {
	if (!this->_signed)
	{
		std::cout <<  executor.getName() << " cannot execute " << this->getName() << " because ";
		throw (Form::UnsignedException());
	}
	if (executor.getGrade() > this->_grade_to_exec)
	{
		std::cout <<  executor.getName() << " cannot execute " << this->getName() << " because ";
		throw (Form::GradeTooLowException());
	}
}