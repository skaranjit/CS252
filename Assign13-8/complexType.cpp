//Implementation file complexType.cpp

#include <iostream>

#include "complexType.h"

using namespace std;

ostream& operator<< (ostream& os, const complexType& complex)

{

os << "(" << complex.realPart << ", "

<< complex.imaginaryPart << ")";

return os;

}

istream& operator>> (istream& is, complexType& complex)

{

char ch;

is >> ch; //read and discard (

is >> complex.realPart; //get the real part

is >> ch; //read and discard,

is >> complex.imaginaryPart; //get the imaginary part

is >> ch; //read and discard)

return is;

}

bool operator==(const complexType& otherComplex,const complexType& two) 

{

return(two.realPart == otherComplex.realPart &&

two.imaginaryPart == otherComplex.imaginaryPart);

}

//constructor

complexType::complexType(double real, double imag)

{

realPart = real;

imaginaryPart = imag;

}

void complexType::setComplex(const double& real, const double& imag)

{

realPart = real;

imaginaryPart = imag;

}

void complexType::getComplex(double& real, double& imag) const

{

real = realPart;

imag = imaginaryPart;

}

//overload the operator +

complexType operator+(const complexType& otherComplex,const complexType& two) 

{

complexType temp;

temp.realPart = two.realPart + otherComplex.realPart;

temp.imaginaryPart = two.imaginaryPart + otherComplex.imaginaryPart;

return temp;

}

//overload the operator *

complexType operator*(const complexType& otherComplex,const complexType& two) 

{

complexType temp;

temp.realPart = (two.realPart * otherComplex.realPart) -

(two.imaginaryPart*otherComplex.imaginaryPart);

temp.imaginaryPart = (two.realPart * otherComplex.imaginaryPart) +

(two.imaginaryPart * otherComplex.realPart);

return temp;

}

complexType operator-(const complexType& otherComplex,const complexType& two)

{

complexType temp;

temp.realPart = two.realPart - otherComplex.realPart;

temp.imaginaryPart = two.imaginaryPart - otherComplex.imaginaryPart;

return temp;

}

complexType operator/(const complexType& two,const complexType& otherComplex) 

{

complexType temp;

double denominator;

if (otherComplex.realPart == 0 && otherComplex.imaginaryPart == 0)

{

cout << "Cannot divide by zero" << endl;

return otherComplex;

}

else

{

denominator = otherComplex.realPart * otherComplex.realPart +

otherComplex.imaginaryPart * otherComplex.imaginaryPart;

temp.realPart = ((two.realPart * otherComplex.realPart) +

(two.imaginaryPart * otherComplex.imaginaryPart)) /

denominator ;

temp.imaginaryPart = ((- two.realPart * otherComplex.imaginaryPart) +

(two.imaginaryPart * otherComplex.realPart)) /

denominator;

return temp;

}

}
