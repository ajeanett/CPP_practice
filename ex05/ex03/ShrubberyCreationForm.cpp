#include "ShrubberyCreationForm.hpp"

static const char *ascii_tree = ""
"       _-_ \n"
"   /~~    ~~ \\\n"
" /~~         ~~\\\n"
"{               }\n"
" \\  _-     -_  /\n"
"   ~  \\ //  ~\n"
"_- -   | | _- _\n"
"  _ -  | |   -_\n"
"      // \\    \n";

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : 
Form("Shrubbery CreationForm", 145, 137), _target(target) {
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
:
	Form("Shrubbery CreationForm", 145, 137)
{
     *this = copy; 
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &assign)
{
	if (this == &assign)
		return (*this);
	_target = assign._target;
	return (*this);
}

void		ShrubberyCreationForm::execute(Bureaucrat const &executor) const {

	Form::execute(executor);
	std::ofstream file;
    file.exceptions(std::ofstream::badbit | std::ofstream::failbit);
    try
    {
		file.open((_target + "_shrubbery").c_str());

    }
    catch(const std::exception& e) 
    {
        std::cout << e.what() << std::endl;
		std::cout << "Error open file." << std::endl;

    }
    file << ascii_tree;
	file.close();
}
