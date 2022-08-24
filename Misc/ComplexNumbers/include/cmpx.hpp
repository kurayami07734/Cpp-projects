#ifndef CMPX_HPP
#define CMPX_HPP
#include <iostream>
// Author : Aditya Ghidora
// Class to model complex numbers
class cmpx {
   protected:
    float x, y;

   public:
    // constructors
    cmpx();
    cmpx(float, float);
    cmpx(const cmpx&);

    // member methods
    virtual double argmt();
    virtual double magnitude();

    // overloaded operators
    bool operator==(const cmpx&);
    bool operator!=(const cmpx&);
    cmpx& operator=(const cmpx&);
    cmpx& operator+(const cmpx&);
    cmpx& operator-(const cmpx&);
    cmpx& operator*(const cmpx&);
    cmpx& operator/(const cmpx&);

    // friends of this class
    friend cmpx& operator+=(cmpx&, cmpx&);
    friend cmpx& operator-=(cmpx&, cmpx&);
    friend std::ostream& operator<<(std::ostream&, const cmpx&);
    friend std::istream& operator>>(std::istream&, cmpx&);

    virtual ~cmpx() = default;
};

class math_error : public std::exception {
   private:
    char* s;

   public:
    math_error(char* a) noexcept { s = a; }
    ~math_error() = default;
    virtual const char* what() const noexcept { return s; }
};

#endif  // CMPX_HPP
