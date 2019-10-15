 #include "lineType.h"
#include <cmath>
 using namespace std;

void lineType::setLineCoordinates(double a1,double b1,double a2, double b2){
     a.setX(a1);
     a.setY(b1);
     b.setX(a2);
     b.setY(b2);
 }
void lineType::setLineCoordinates(pointType& p1,pointType& p2){
    a = p1;
    b = p2;

    }
void lineType::getLineCoordinates(pointType& p1, pointType& p2){
    cout <<"p1 = ("<<p1.getX()<<", "<<p1.getY()<<")"<<endl;
    cout <<"p2 = ("<<p2.getX()<<", "<<p2.getY()<<")"<<endl;
}

double lineType::slope(){
      // If line is vertical, then the function 
      // returns -999999999999999.
      if (isVerticalLine() == true){
        return -999999999999999;
      }
      else {
        double y2,x2,slope;
        y2 = (b.getY()-a.getY());
        x2= (b.getX()-a.getX());
        return y2/x2;
      }
}


void lineType::lineEquation(){
    double m,c;
    m = slope();
    c = a.getY()-(m*a.getX());
    cout << "y = "<<m<<"x + "<<c<<endl;
}

bool lineType::isVerticalLine(){
    double d,c;
    d = a.getX();
    if (d<0) d*=-1;
    c = b.getX();
    if (c<0) c*=-1;
    if (c ==d)
        return true;
    else return false;
}
bool lineType::isHorizontalLine(){
    double d,c;
    d = a.getY();
    if (d<0) d*=-1;
    c = b.getY();
    if (c<0) c*=-1;
        if (c == d) return true;
        else return false;
    }
bool lineType::parallel(lineType& l){
    if (slope() == l.slope()) return true;
    else return false;
}
pointType lineType::intersectionPoint(lineType& l){
    if (!parallel(l)){
        double m1,m2,c1,c2;
        m1 = slope();
        c1 = a.getY()-(m1*a.getX());
        m2 = l.slope();
        c2 = l.a.getY()-(m2*l.a.getX());
        double i,p;
        i = (c2-c1)/(m1-m2);
        p =( m1 * i + c1);
        return pointType(i,p);
    }
}

lineType::lineType(double a1, double b1,double a2, double b2){
    a.setX(a1);
    a.setY(b1);
    b.setX(a2);
    b.setY(b2);
}
lineType::lineType(pointType& p1, pointType& p2){
    a =p1;
    b = p2;
}
