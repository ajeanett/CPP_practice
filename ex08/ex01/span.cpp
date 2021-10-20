#include "span.hpp"

Span::Span() : _N(0) {}

Span::~Span() {}

Span::Span(unsigned int N) : _N(N) {}

Span::Span(const Span &src) {
    *this = src;
}

Span &Span::operator=(const Span &src) {
    if (this != &src)
    {
        this->_N = src._N;
        this->_vector = src._vector;
    }
    return (*this);
}

void 	Span::addNumber(int n) {
    if (this->_vector.size() < this->_N)
        this->_vector.push_back(n);
    else
        throw ErrorSize();
}

int		Span::shortestSpan() {
    std::sort(this->_vector.begin(), this->_vector.end());
    if (this->_vector.size() < 2)
        throw (Span::ErrorArg());
	int ret = INT_MAX;
    unsigned int i = 0;
	while ((i + 1) < this->_vector.size()) {
		if ((_vector[i + 1] - _vector[i]) < ret)
			ret = _vector[i + 1] - _vector[i];
		++i;
	}
	return (ret);
}

int		Span::longestSpan() {
	if (this->_vector.size() < 2)
        throw (Span::ErrorArg());
	std::vector<int>::iterator it;
	std::vector<int>::iterator ite;
	it = std::min_element(_vector.begin(), _vector.end());
	ite = std::max_element(_vector.begin(), _vector.end());
    return (*ite - *it);
    
}

const char* Span::ErrorSize::what() const throw() {
	return("Error! Not enough space to add a number!");
}

const char* Span::ErrorArg::what() const throw() {
	return("Error! Not enough arguments to compare!");
}

void 	Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	if (begin > end)
		throw ErrorSize();
	if (this->_vector.size() + static_cast<int>(end - begin) >= this->_N)
		throw ErrorSize();
	std::vector<int>::iterator i = begin;
	while (i != end) {
		this->_vector.push_back(*i);
		++i;
	}
}