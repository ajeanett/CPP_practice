#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
T   max (const T& a, const T& b) {
    return ((a > b) ? a : b);
}

template <typename T>
T   min (const T& a, const T& b) {
    return ((a < b) ? a : b);
}

template <typename T>
void   swap (T & a, T & b) {
    T c = a;
    a = b;
    b = c;
}

// const int getN(){return this->_n;}

#endif