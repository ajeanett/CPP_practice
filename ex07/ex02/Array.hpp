#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <string>
# include <iostream>

template <class T>
class			Array {
private:
	T			*_arr;
	unsigned int _len;
public:
    Array();
	Array(unsigned int n);
	~Array();
	Array		&operator=(const Array& src);
	Array(const Array& src);
	int		size() const;

	class		ArrayError : public std::exception {
	public:
		virtual const char* what() const throw() {
			return("Error!this element is out of the limits!");
		}
	};
	T		&operator[](unsigned int i);
};

template <class T>
Array<T>::Array(){
		_arr = new T[0]();
		_len = 0;
	}

template <class T>
Array<T>::Array(unsigned int n){
		_arr = new T[n]();
		_len = n;
	}

template <class T>
Array<T>::~Array(){
		delete [] _arr;
	}

template <class T>
Array<T>::Array(const Array& src) {
        *this = src;
}

template <class T>
int Array<T>::size() const{
		return (_len);
	}

template <class T>
Array<T>		&Array<T>::operator=(const Array& src) {
		if (this == &src)
			return (*this);
		this->_arr = new T[src._len];
		this->_len = src._len;
		for (unsigned int i = 0; i < src._len; i++)
			this->_arr[i] = src._arr[i];
		return (*this);
	}

template <class T>
T		&Array<T>::operator[](unsigned int n) {
		if (n < 0 || n >= this->_len)
			throw (Array<T>::ArrayError());
		return (this->_arr[n]);
	}

#endif