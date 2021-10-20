#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"
# include <cstdlib>

class	Bureaucrat;

class					Form 
{
private:
	const std::string	_name;
	bool				_signed;
	const int			_grade_to_sign;
	const int			_grade_to_exec;
public:
	Form(const std::string & _name, const int & _grade_to_sign, const int & _grade_to_exec);
	virtual ~Form();
	Form(Form const &copy);
	Form &operator=(Form const &assign);
	std::string 		getName() const;
    int 				get_grade_to_sign() const;
    int 				get_grade_to_exec() const;
	bool				getSign() const;
	class		GradeTooHighException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
	class		GradeTooLowException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
	class		SignedException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
	class		UnsignedException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
    void	    beSigned(Bureaucrat const &bureaucrat);
	virtual void		execute(Bureaucrat const &executor) const = 0;
};

std::ostream		&operator<<(std::ostream &o, const Form &src);

#endif