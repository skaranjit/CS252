#include "calcMedian.cpp"
#include "calcAvg.cpp"
#include <iomanip>
//Function to print out the summary.

void outputSummary(int scores[],int count, int maximum){
    cout << "********** Summary Information ***********"<<endl;
    sort(scores,count);
    cout << "Maximum Score : "<<right<<setw(26)<<maximum<<endl;
    cout << "The number of Students Processed : "<<right<<setw(7)<< count<<endl;
    cout << "High Score : "<<right<<setw(29)<<scores[count-1]<<endl;
    cout <<"Low Score : "<<right<<setw(30)<<scores[0]<<endl;
    cout <<"Average Score : "<<right<<setw(26)<<setprecision(2)<<calcAvg(scores,count)<<endl;
    cout << "Median Score : "<<right<<setw(27)<<calcMedian(scores,count)<<endl;
    cout <<endl;
    }
