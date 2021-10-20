#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>

template<class T>
class       MutantStack : public std::stack<T> {
public:
    MutantStack() : std::stack<T>() {}
    ~MutantStack() {}
    MutantStack(const MutantStack &src) { *this = src; }
    MutantStack &operator=(const MutantStack &src) {
        if (this != &src)
        {
            std::stack<T>::operator=(src);
        }
        return (*this);
    }
	class	iterator : public std::iterator<std::input_iterator_tag, T> {
	private:
		T       *_it;
        
	public:
		~iterator() {}
        iterator() {
            this->_it = NULL;
        }
        iterator(T* it) : _it(it) {}
		iterator	&operator=(const iterator &src);
        T			operator*() {return (*this->_it);}
		iterator(const iterator &src) { *this = src;}
		iterator	operator++() { //it++
			iterator tmp = *this;
			this->_it--;
			return(tmp);
		}
		iterator	operator++(int) { //++it
			this->_it--;
			return(*this);
		}
		iterator	operator--() { //it--
			iterator tmp = *this;
			this->_it++;
			return(tmp);
		}
		iterator	operator--(int) { //--it
			this->_it++;
			return(*this);
		}
		bool		operator!=(const iterator &src) { return (this->_it != src._it);}
		bool		operator==(const iterator &src) { return (this->_it == src._it);}
	};
	iterator	begin() { return (iterator(&this->top()));}
	iterator	end() { return (iterator(&this->top() - this->size()));}
};

template<typename T>
typename MutantStack<T>::iterator	&MutantStack<T>::iterator::operator=(const iterator &src)
{
    if (this != &src)
    {
        this->_it = src._it;
    }
	return (*this);
}

#endif