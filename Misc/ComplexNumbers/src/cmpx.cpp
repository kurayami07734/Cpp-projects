#include "../include/cmpx.hpp"
#include <iostream>
#include <cmath>
#include <exception>
cmpx::cmpx()
{
	this->x = 0;
	this->y = 0;
}

cmpx::cmpx(float a, float b)
	: x(0), y(0)
{
	x = a;
	y = b;
}

cmpx::cmpx(const cmpx &c)
	: x(0), y(0)
{
	x = c.x;
	y = c.y;
}

double cmpx::argmt()
{
	if (x == 0)
		throw math_error("Cannot divide by zero");
	else
	{
		double arg{};
		arg = atan(y / x);
		return arg;
	}
}

double cmpx::magnitude()
{
	double mag{};
	mag = sqrt(x * x + y * y);
	return mag;
}

bool cmpx::operator==(const cmpx &c)
{
	bool res{false};
	if ((c.x == x) && (c.y == y))
		res = true;
	return res;
}

bool cmpx::operator!=(const cmpx &c)
{
	bool res{false};
	if ((c.x != x) && (c.y != y))
		res = true;
	return res;
}

cmpx &cmpx::operator=(const cmpx &c)
{
	this->x = c.x;
	this->y = c.y;
	return *this;
}

cmpx &cmpx::operator+(const cmpx &c)
{
	this->x += c.x;
	this->y += c.y;
	return *this;
}

cmpx &cmpx::operator-(const cmpx &c)
{
	this->x -= c.x;
	this->y -= c.y;
	return *this;
}

cmpx &cmpx::operator*(const cmpx &c)
{
	float newx{}, newy{};
	newx = x * (c.x) - y * (c.y);
	newy = x * (c.y) + y * (c.x);
	this->x = newx;
	this->y = newy;
	return *this;
}

cmpx &cmpx::operator/(const cmpx &c)
{
	// ! this function is not working properly
	if (c.x == 0 && c.y == 0)
		throw math_error("Cannot divide by zero");
	else
	{
		float newx{}, newy{};
		double m = magnitude();
		m *= m;
		newx = x * (c.x) + y * (c.y);
		newy = y * (c.x) - x * (c.y);
		newx /= m;
		newy /= m;
		this->x = newx;
		this->y = newy;
		return *this;
	}
}

std::ostream &operator<<(std::ostream &out, const cmpx &c)
{
	out << c.x << " ";
	out.setf(std::ios::showpos);
	out << c.y << "i ";
	out.unsetf();
	return out;
}

std::istream &operator>>(std::istream &in, cmpx &c)
{
	in >> c.x >> c.y;
	return in;
}
cmpx &operator+=(cmpx &a, cmpx &b)
{
	a.x += b.x;
	a.y += b.y;
	return a;
}

cmpx &operator-=(cmpx &a, cmpx &b)
{
	a.x -= b.x;
	a.y -= b.y;
	return a;
}
