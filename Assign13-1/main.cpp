#include <iostream>
#include "rectangleType.h"
using namespace std;

int main() {
    // Write your main here
    rectangleType rect1(12,7);
    rectangleType rect2(4,6);
    rectangleType rect3(13,8);
    rectangleType temp = rect1 + rect2;
    if(rect1 != rect2) cout<<"True";
    rect1++;
    if(rect1 == rect3) cout<<"True";
    return 0;
}
