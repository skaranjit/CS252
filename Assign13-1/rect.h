#ifndef H_rectangleType
#define H_rectangleType

#include <iostream>

class rectangleType
{
    public:
        rectangleType(double l, double w);
        rectangleType operator+(const rectangleType& rect) const;
        rectangleType operator-(const rectangleType& rect) const;
        bool operator==(const rectangleType& rect) const;
        bool operator!=(const rectangleType& rect) const;
        bool operator>=(const rectangleType& rect) const;
        bool operator<=(const rectangleType& rect) const;
        rectangleType operator++();
        rectangleType operator++(int j);
        rectangleType operator--();
        rectangleType operator--(int j);
    protected:
        double l;
        double w;
};
#endif
