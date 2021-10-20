# include <iostream>
# include <ctime>
# include <cstdlib>
# include <string>
# include <unistd.h>
# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"
# define TESTS 10

Base	*generate(void) {
	int	choice = rand() % 3;
	if (choice == 0)
		return (new A);
	else if (choice == 1)
		return (new B);
    else
        return (new C);
}

void	identify_from_pointer(Base *p) {
	if (dynamic_cast<A*>(p))
		std::cout << "Class A" <<std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "Class B" <<std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "Class C" <<std::endl;
}

void	identify_from_reference(Base &p) {
    if (dynamic_cast<A*>(&p))
        std::cout << "Class A" << std::endl;
    else if (dynamic_cast<B*>(&p))
        std::cout << "Class B" << std::endl;
    else if (dynamic_cast<C*>(&p))
        std::cout << "Class C" << std::endl;
}

int		main() {
	srand(time(0));
	Base	*p;
	p = generate();
	std::cout << "identify_from_pointer: ";
	identify_from_pointer(p);
	std::cout << "identify_from_reference: ";
	identify_from_reference(*p);
    delete p;

	return 0;
}