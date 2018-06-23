#ifndef NUMBER_H
#define NUMBER_H

class Number
{
public:
Number operator +(const Number& ) {};
Number operator *(const Number& ) {};
virtual void print(){} ; 
};

class RealNumber:public Number
{
public:
RealNumber(double);
RealNumber operator +(const RealNumber& );
RealNumber operator *(const RealNumber& );
virtual void print();
double real;
};

class IntegerNumber:public RealNumber
{
public:
IntegerNumber(int);
IntegerNumber operator +(const IntegerNumber& );
IntegerNumber operator *(const IntegerNumber& );
virtual void print();
int integer;
};

class ComplexNumber:public Number
{
public:
ComplexNumber(double,double);
ComplexNumber operator +(const ComplexNumber& );
ComplexNumber operator *(const ComplexNumber& );
virtual void print();
double real,imag;
};







#endif
