#include "mutantstack.hpp"
#include <list>

int main()
{
    std::cout << "*********   TEST SUBJECT *********" << std::endl << std::endl;
    {
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3); mstack.push(5); mstack.push(737); //[...] 
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it; 
    }
    std::stack<int> s(mstack);
    }
    std::cout << "*********   TEST LIST *********" << std::endl << std::endl;
    {
    std::list<int> mstack;
    mstack.push_back(5);
    mstack.push_back(17);
    std::cout << mstack.back() << std::endl;
    mstack.pop_back();
    std::cout << mstack.size() << std::endl;
    mstack.push_back(3); mstack.push_back(5); mstack.push_back(737); //[...] 
    mstack.push_back(0);
    std::list<int>::iterator it = mstack.begin();
    std::list<int>::iterator ite = mstack.end();
    ++it;
    --it;
        while (it != ite) {
            std::cout << *it << std::endl;
            ++it; 
        }
    }
    std::cout << "*********   ADDITIONAL TESTS *********" << std::endl << std::endl;
    {

    	MutantStack<int>		stack;
	    MutantStack<int>::iterator	i;

        stack.push(153);
        stack.push(-16);
        stack.push(21);
        stack.push(752);
        i = stack.begin();
        std::cout << "Size of stack: " << stack.size() << " " << *(i) << std::endl;
        std::cout << "Size of stack: " << stack.size() << " " << *(++i) << std::endl;
        std::cout << "Size of stack: " << stack.size() << " " << *(--i) << std::endl;
        std::cout << "Size of stack: " << stack.size() << " " << *(i++) << std::endl;
        std::cout << "Size of stack: " << stack.size() << " " << *(i--) << std::endl;
        i++;
        i++;
        std::cout << "Size of stack: " << stack.size() << " " << *(i) << std::endl;
        std::cout << "Size of stack: " << stack.size() << " " << *(i++) << std::endl;
        i = stack.begin();
        std::cout << "stack.begin() " << stack.size() << " " << *(i) << std::endl;
        MutantStack<int>::iterator it = stack.begin();
        MutantStack<int>::iterator ite = stack.end();
        ++it;
        --it;
            while (it != ite) {
                std::cout << *it << std::endl;
                ++it; 
        }
    }
    return 0;
}