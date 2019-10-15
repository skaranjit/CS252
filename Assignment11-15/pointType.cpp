#include "pointType.h"
#include <cmath>
using namespace std;

void pointType::setPoint(double a, double b){
    //Function to set the x and y coordinates of a point
      //Postcondition x = a; y = b;
    x = a;
    y = b;
}
      

void pointType::setX(double a){
      //Function to set x coordinate.
      //Postcondition: x = a;
      x = a;
      
    }

double pointType::getX(){
      //Function to return the x coordinate.
      return x;
}
void pointType::setY(double b){
     //Function to set y coordinate.
     //Postcondition: y = b;
    y = b;
}
double pointType::getY(){
    //Function to return the y coordinate.
    return y;
}   
double pointType::distance(pointType & point){
      //Function to return the distance between this point
      //point
      double xA,yA;
      xA = pow((point.getX()-x),2);
      yA = pow((point.getY()-y),2);
      return sqrt(xA+yA);
}

void pointType::print() const{
    //Function to print the x and y coordinates.
    cout << "x = " << x<<endl;
    cout  << "y =" << y<<endl;
}
      //Function to print the x and y coordinates.
pointType::pointType(double a, double b){
    x =a;
    y = b;
}
      //Constructor with a default parameter.
