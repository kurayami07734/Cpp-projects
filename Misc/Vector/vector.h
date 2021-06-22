#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
class vector
{
private:
    float x,y,z; 
public:
    //constructors
    vector();
    vector(float,float,float);
    vector(const vector &v);
    
    //member functions
    double magnitude();
    vector& normalize();
    
    //overloaded operators
    vector& operator * ();
    vector& operator = (const vector &v);
    vector& operator + (const vector &v);
    vector& operator - (const vector &v);
    vector& operator += (const vector &v);
    vector& operator -= (const vector &v);
    float operator * (const vector &v);
    vector& operator ^ (const vector &v);
    
    //friends of this class
    friend std::ostream& operator << (std::ostream& out,const vector &v);
    friend std::istream& operator >> (std::istream& in, vector &v);

};

#endif // VECTOR_H
