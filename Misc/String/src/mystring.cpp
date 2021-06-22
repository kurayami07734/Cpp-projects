#include "../include/mystring.hpp"
#include <iostream>
#include <cstring>
std::ostream& operator<<(std::ostream &out,const mystring &obj)
{
    out << obj.str;
    return out;
}

std::istream& operator>>(std::istream &in,mystring &obj)
{
    char *temp = new char[100];
    in >> temp; 
    obj = mystring(temp);
    return in;
}

bool operator==(const mystring &lhs,const mystring &rhs)
{
    bool result{false};
    if(strcmp(lhs.str,rhs.str) == 0)
        result = true;
    return result;
}

bool operator!=(const mystring &lhs,const mystring &rhs)
{
    bool result{false};
    if(strcmp(lhs.str,rhs.str) != 0)
        result = true;
    return result;    
}

mystring::mystring()
:str(nullptr){
    str = new char[1];
    str[0] = '\0';
}

mystring::mystring(const char *s)
:str(nullptr){
    str = new char[strlen(s)+1];
    strcpy(str,s);
}

mystring::mystring(const mystring &rhs) //copy constructor
:str(nullptr){
    str = new char[strlen(rhs.str)+1];
    strcpy(str,rhs.str);    
}

mystring::mystring(mystring &&rhs) //move constructor 
:str(nullptr){
    str = rhs.str;
    rhs.str = nullptr;    
}

mystring& mystring::operator=(const mystring &rhs) //copy assignment
{
    if(this == &rhs)
        return *this;
    delete[] str;
    str = new char[strlen(rhs.str)+1];
    strcpy(str,rhs.str);
    return *this;
}

mystring& mystring::operator=(mystring &&rhs)
{
    if(this == &rhs)
        return *this;
    delete[] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

char& mystring::operator[](size_t pos)
{
    return str[pos];
}

size_t mystring::size()
{
    return strlen(str);
}

mystring::~mystring()
{
    delete[] str;
}

mystring& mystring::operator+(const mystring &rhs)
{
    char *res = new char[strlen(rhs.str)+strlen(str)+1];
    strcpy(res,str);
    strcat(res,rhs.str);
    this->str = res;
    return *this;
}
mystring& mystring::operator-()
{
    for(size_t i = 0 ; i < strlen(str) ; i++)
        str[i] = tolower(str[i]);
    return *this;
}

// ! not implemented yet
// mystring& mystring::getline(std::istream &in,mystring &obj)
// {
    
// }

