#include "integerManipulation.h"
#include <string>
#include <sstream>

using namespace std;

integerManipulation::integerManipulation(long long n = 0){
    num =n;
}
void integerManipulation::setNum(long long n){
    num =n;
}
long long integerManipulation::getNum(){
    return num;
}
void integerManipulation::reverseNum(){
    string n;
    int rev;
    stringstream ss;
    ss<<num;
    ss>>n;
    int len = n.length()
    for (int i=0;i<len;i++){
        swap(n[i],n[len-i-1]);
    }
    ss.clear();
    ss<<n;
    ss>> rev;
    revNum = rev;
}
void integerManipulation::classifyDigits(){
    string n;
    stringstream ss;
    ss<<num;
    ss>>n;
    ss.clear();
    for (int i=0;i<n.length();i++){
        int x;
        ss << n[i];
        ss >> x;
        ss.clear();
        if (x == 0){
            zerosCount++;

        }
        else if(x % 2 == 0) evensCount++;
        else oddsCount++;  
    }

}
int integerManipulation::getOddsCount(){
    return oddsCount;
}
int integerManipulation::getEvensCount(){
    return eventsCount;
}
int integerManipulation::getZerosCount(){
    return zerosCount;
}
int integerManipulation::sumDigits(){
    string n;
    stringstream ss;
    ss<<num;
    ss>>n;
    ss.clear();
    int sum;
    for (int i=0;i<n.length();i++){
        int x;
        ss << n[i];
        ss >> x;
        ss.clear();
        sum += x;
}