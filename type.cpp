#include"type.h"
#include<iostream>
using namespace std;

RealNumber::RealNumber(double a)
{
real = a;
}

RealNumber RealNumber::operator +(const RealNumber& other)
{
real += other.real;
return *this;
}

RealNumber RealNumber::operator *(const RealNumber& other)
{
real *= other.real;
return *this;
}

void RealNumber::print()
{cout<<real;}





IntegerNumber::IntegerNumber(int b)
{
integer = b;
}

IntegerNumber IntegerNumber::operator +(const IntegerNumber& other)
{
integer += other.integer;
return *this;
}

IntegerNumber IntegerNumber::operator *(const IntegerNumber& other)
{
integer *= other.integer;
return *this;
}

void IntegerNumber::print()
{
cout<<integer;
}





ComplexNumber::ComplexNumber(double a,double b)
{
real=a;
imag=b;
}

ComplexNumber ComplexNumber::operator +(const ComplexNumber& other)
{
real += other.real;
imag += other.imag;
return *this;
}

ComplexNumber ComplexNumber::operator *(const ComplexNumber& other)
{
ComplexNumber T;
T.real= real * other.real - imag * other.imag;
T.imag= real * other.imag + imag * other.real;
return T;
}

void ComplexNumber::print()
{cout<<real<<","<<imag;}







































