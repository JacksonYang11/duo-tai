#include<iostream>
#include"type.h"
using namespace std;

int main()
{
RealNumber a1(1.2),a2(1.3),a3(0);
a3 = a1 + a2;
a3.print();
cout<<"\n";
a3 = a1 * a2;
a3.print();
cout<<"\n\n";

IntegerNumber b1(2),b2(3),b3(0);
b3 = b1 + b2;
b3.print();
cout<<"\n";
b3 = b1 * b2;
b3.print();
cout<<"\n\n";

ComplexNumber c1(1,2),c2(3,4),c3(0,0);
c3 = c1 + c2;
c3.print();
cout<<"\n";
c3 = c1 * c2;
c3.print();


}
