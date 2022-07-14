#include "../include/vector.hpp"
#include <iostream>
#include <cmath>
vector::vector()
    : x(0), y(0), z(0)
{
}

vector::vector(float x, float y, float z)
    : x(0), y(0), z(0)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

vector::vector(const vector &v)
{
    this->x = v.x;
    this->y = v.y;
    this->z = v.z;
}

double vector::magnitude()
{
    double mag{0};
    mag = sqrt(x * x + y * y + z * z);
    return mag;
}

vector &vector::normalize()
{
    double mag = magnitude();
    vector nvec;
    nvec.x = this->x / mag;
    nvec.y = this->y / mag;
    nvec.z = this->z / mag;
    return *nvec;
}

vector &vector::operator*()
{
    return *this;
}
vector &vector::operator=(const vector &v)
{
    this->x = v.x;
    this->y = v.y;
    this->z = v.z;
    return *this;
}
vector &vector::operator+(const vector &v)
{
    vector res;
    res.x = x + v.x;
    res.y = y + v.y;
    res.z = z + v.z;
    return *res;
}

vector &vector::operator-(const vector &v)
{
    vector res;
    res.x = x - v.x;
    res.y = y - v.y;
    res.z = z - v.z;
    return *res;
}

vector &vector::operator+=(const vector &v)
{
    this->x += v.x;
    this->y += v.y;
    this->z += v.z;
    return *this;
}

vector &vector::operator-=(const vector &v)
{
    this->x -= v.x;
    this->y -= v.y;
    this->z -= v.z;
    return *this;
}

float vector::operator*(const vector &v) //dot product
{
    float res;
    res = x * (v.x) + y * (v.y) + z * (v.z);
    return res;
}
vector &vector::operator^(const vector &v) //cross product
{
    vector res;
    res.x = y * (v.z) - z * (v.y);
    res.y = z * (v.x) - x * (v.z);
    res.z = x * (v.y) - y * (v.x);
    return *res;
}

std::ostream &operator<<(std::ostream &out, const vector &v)
{
    out << v.x << "i ";
    out.setf(std::ios::showpos);
    out << v.y << "j " << v.z << "k ";
    // out.unsetf();
    return out;
}

std::istream &operator>>(std::istream &in, vector &v)
{
    in >> v.x >> v.y >> v.z;
    return in;
}
