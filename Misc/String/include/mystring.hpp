#ifndef MYSTRING_HPP
#define MYSTRING_HPP
#include <iostream>
// Author : Aditya Ghidora
// Class to implement string in c++
// Made for educational purposes
class mystring {
    char *str;

   public:
    // constructors
    mystring();
    mystring(const char *);
    mystring(const mystring &rhs);  // copy constructor
    mystring(mystring &&rhs);       // move constructor

    // member methods
    size_t size();

    // overloaded operators
    mystring &operator=(const mystring &rhs);
    mystring &operator=(mystring &&rhs);
    char &operator[](size_t pos);
    mystring &operator+(const mystring &rhs);
    mystring &operator-();

    // friends of this class
    friend bool operator==(const mystring &lhs, const mystring &rhs);
    friend bool operator!=(const mystring &lhs, const mystring &rhs);
    friend std::ostream &operator<<(std::ostream &out, const mystring &obj);
    friend std::istream &operator>>(std::istream &in, mystring &obj);
    ~mystring();
};

#endif  // MYSTRING_HPP
