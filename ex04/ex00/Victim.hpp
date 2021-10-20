#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

# define BOLD "\033[1m"
# define GREEN "\033[1;32m"
# define RED "\033[1;31m"
# define BLUE "\033[1;36m"
# define YELLOW "\033[1;33m"
# define CYAN "\033[1;96m"
# define BLUE2 "\033[1;34m"
# define MAGENTA "\033[1;35m"
# define END "\033[0m"

class				Victim {
private:
	std::string		_name;
public:
	Victim();
	Victim(std::string);
	virtual ~Victim();
	Victim(Victim const &);
	Victim			&operator=(Victim const &);
	std::string		get_name() const;
	virtual void	getPolymorphed() const;
};

std::ostream		&operator<<(std::ostream &os, const Victim &cpy);

#endif