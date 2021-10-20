#include "easyfind.hpp"
#include <algorithm>
#include <iostream>
#include <list>
#include <array>

void print_vector(std::vector<int> testvector)
{
    std::vector<int>::iterator it;
    std::cout << "testvector : " ;
    for (it = testvector.begin(); it != testvector.end(); ++it)
        std::cout << *it << " " ;
    std::cout << std::endl;
}

void print_array(std::array<int, 5> &array)
{
    std::array<int, 5>::iterator it;
    std::cout << "array : " ;
    for (it = array.begin(); it != array.end(); ++it)
        std::cout << *it << " " ;
    std::cout << std::endl;
}




int     main() {
    

    std::cout << "*********   TEST LIST  *********" << std::endl << std::endl;
    try {
        std::list<int> testList;
        std::list<int>::iterator it;
		for (int i = 0; i < 10; ++i)
			testList.push_back(i);
        for (int i = 0; i < 10; ++i)
			testList.push_front(i);
    // std::for_each(testList.begin(), testList.end(), my_out);
    // Print out the list
    //     std::cout << "testList = { ";
    //     for (int n : testList) {
    //     std::cout << n << ", ";
    //     }
    // std::cout << "};\n";}
    std::cout << "testList : " ;
    for (it = testList.begin(); it != testList.end(); ++it)
        std::cout << *it << " " ;
    std::cout << std::endl;
    //Create an iterator of std::list
// std::list<Player>::iterator it;
// Make iterate point to begining and incerement it one by one till it reaches the end of list.
// for (it = listofPlayers.begin(); it != listofPlayers.end(); it++)
// {
//     // Access the object through iterator
//     int id = it->id;
//     std::string name = it->name;
    
//     //Print the contents
//     std::cout << id << " :: " << name << std::endl;
// }
		it = easyfind(testList, 4);
		std::cout << "Value is founded - " << *it << std::endl;
        it = easyfind(testList, 10);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl << std::endl;
    std::cout << "*********   TEST VECTOR  *********" << std::endl << std::endl;
    try {
        std::vector<int> testvector;
        std::vector<int>::iterator it;
		for (int i = 0; i < 10; ++i)
			testvector.push_back(i);
        std::cout << "testvector : " ;
		it = easyfind(testvector, 3);
        std::cout << "Value is founded - " << *it << std::endl;
        print_vector(testvector);
        testvector.insert(it, 42);
        print_vector(testvector);
        it = testvector.insert(easyfind(testvector, 7), 21);
        print_vector(testvector);
        std::cout << "Current iterator is - " << *it << std::endl;
        for (it = testvector.begin(); it != testvector.end(); ++it)
            my_out(*it);
        std::cout << std::endl;
        easyfind(testvector, 20);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl << std::endl;
    std::cout << "*********   TEST ARRAY *********" << std::endl << std::endl;
    try {
        std::array<int, 5> a = {1, 2, 3, 21, 42};
        std::array<int, 5>::iterator it;
        std::cout << "testvector : " ;
        for (it = a.begin(); it != a.end(); ++it)
            std::cout << *it << " " ;
        std::cout << std::endl;
		it = easyfind(a, 21);
        std::cout << "Value is founded - " << *it << std::endl;
        print_array(a);
        std::cout << "a.front() - " << a.front() << std::endl;
        std::cout << "a.back() - " << a.back() << std::endl;
        std::cout << "a[3] - " << a[3] << std::endl;
        std::cout << "Size of array - " << a.size() << std::endl;
        std::cout << "Current iterator is - " << *it << std::endl;
        easyfind(a, 20);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    return (0);
}