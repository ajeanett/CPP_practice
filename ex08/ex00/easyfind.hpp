#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <list>
# include <vector>
# include <algorithm>

template <typename T>
void    my_out( T src) {
    std::cout << src << " ";
}

class ErrorFind: public std::exception {
	virtual const char * what() const throw() { 
		return ("Error! Cannot find value."); 
		}
};

template <typename T>
typename T::iterator easyfind(T &arr, int n) {
	typename T::iterator it;
	it = std::find(arr.begin(), arr.end(), n);
	if (it == arr.end())
		throw (ErrorFind());
	return (it);
}

#endif