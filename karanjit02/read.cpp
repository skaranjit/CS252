#include <iostream>
#include "read.h"
using namespace std;
//Read data from user input and assign it to variables;

void read(int *scores,int &count,int &maximum ){
    count = 0;
    int score;
    cout << "Enter Maximum";
    cin >> maximum;
    cin.ignore();
    cout << "Enter Score:";
    cin >> score;
    while (score != -1){
        scores[count] = score;
	cin.ignore();
        cin >> score;
	count ++;
	
    }
}
