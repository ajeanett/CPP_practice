#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <climits>

class       Span {
private:
	std::vector<int>	_vector;
	unsigned int		_N;
    Span();
public:
	Span(unsigned int n);
	~Span();
	Span				&operator=(const Span & src);
	Span(const Span & src);
	void 				addNumber(int n);
	void 				addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int					shortestSpan();
	int					longestSpan();
	class		ErrorSize : public std::exception {
	public:
		virtual const char* what() const throw();
	};
	class		ErrorArg : public std::exception {
	public:
		virtual const char* what() const throw();
	};
};

#endif