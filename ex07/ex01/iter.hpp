#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template <typename T>
void    my_out(const T& src) {
    std::cout << src << std::endl;
}

template <typename T>
void   iter(const T(*array), const int & lenght, void (*func)(const T & elem)) {
    for (int i = 0; i < lenght; i++) {
        (*func)(array[i]);
    }
}

#endif