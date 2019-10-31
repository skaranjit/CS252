
//Data:  21 10 56 43 78 11 20 18 

#include <iostream> 
#include "unorderedArrayListType.h"

using namespace std;

int main() {
    // Write your main here
   unorderedArrayListType myAry;
   int n,i=0;
   
   while (i !=8){
       cout<<"Number:";
       cin >> n;
       myAry.insertEnd(n);
       i++;
   }
    cout <<endl<< "Item to Remove:";
    cin >> n;
    myAry.print();
    myAry.removeAll(n);
    cout<<endl;
    myAry.print();
    
    return 0;
}
