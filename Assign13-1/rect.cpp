#include "rectangleType.h"
using namespace std;

rectangleType::rectangleType(double l, double w){
    l = l;
    w = w;
}
rectangleType rectangleType::operator+(const rectangleType& rect) const {
    double len,wid;
    len = l + rect.l;
    wid = w + rect. w;
    return rectangleType(len,wid);
}
rectangleType rectangleType::operator-(const rectangleType& rect) const {
    double len,wid;
    len = l - rect.l;
    wid = w - rect. w;
    
    return rectangleType(len,wid);
    
}
bool rectangleType::operator==(const rectangleType& rect) const {
    double yard1,yard2;
    yard1 = l*w;
    yard2 = rect.l*rect.w;
    if (yard1==yard2) return true;
    else return false;
}
bool rectangleType::operator!=(const rectangleType& rect) const {
    double yard1,yard2;
    yard1 = l*w;
    cout << yard1;
    yard2 = rect.l*rect.w;
    if (yard1>yard2 or yard2>yard1) return false;
    else return true;
}
bool rectangleType::operator>=(const rectangleType& rect) const{
    
}
bool rectangleType::operator<=(const rectangleType& rect) const{
    
}
rectangleType rectangleType::operator++(){
    
    l = l +1;
    w = w + 1;
    return *this; 
}
rectangleType rectangleType::operator++(int j){
    rectangleType temp = *this;
    l = l + j;
    w = w + j;
    
    return temp;
}
rectangleType rectangleType::operator--(){
    rectangleType temp = *this;
    l--;
    w--;
    return temp;
}
rectangleType rectangleType::operator--(int j){
    rectangleType temp = *this;
    l = l - j;
    w = w -j ;
    return temp;
}

