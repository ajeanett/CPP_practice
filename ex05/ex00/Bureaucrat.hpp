#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include <string>

class       Bureaucrat {
private:
    const std::string       _name;
    int                     _grade;
public:
    Bureaucrat();
    Bureaucrat(std::string, int);
    virtual ~Bureaucrat();
	Bureaucrat(Bureaucrat const &src);
	Bureaucrat &operator=(Bureaucrat const &src);
    std::string 	getName() const;
    int 			getGrade() const;
	void			incrGrade();
	void			decrGrade();
    class           GradeTooHighException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
	class           GradeTooLowException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
};

std::ostream		&operator<<(std::ostream &o, const Bureaucrat &src);

#endif