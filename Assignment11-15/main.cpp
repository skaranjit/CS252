#include <iostream>
#include "lineType.h"
#include <iomanip>
using namespace std;

int main() {
    // Write your main here
    // 
    pointType p1(2,3) ,p2(4,5);
    cout << setprecision(2)<<fixed<< p1.distance(p2)<<endl;
    lineType l1(2,0,2,1);
    lineType l2(3,7,-1,8);
    lineType l3(2,5,3,5);
    cout << l1.isVerticalLine()<<endl;
    cout <<l1.isHorizontalLine()<<endl;
    cout << l2.isVerticalLine() << endl;
    cout << l2.isHorizontalLine() <<endl;
    cout << l3.isVerticalLine()<<endl;
    cout << l3.isHorizontalLine() <<endl;
    l1.lineEquation();
    l3.lineEquation();
    l1.intersectionPoint(l2).print();
    return 0;
}
