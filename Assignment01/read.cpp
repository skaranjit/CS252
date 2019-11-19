#include <iostream>
using namespace std;

//Read data from user input and assign it to variables;

void read(int *scores,int& count,int& maximum ){
    count = 0;
    int score;
    cout << "Enter Maximum";
    cin >> maximum;
    cout << "Enter Score: ";
    cin >> score;
    while (score != -1){
	scores[count] = score;
	count +=1;
	cin >> score;
    }
}
