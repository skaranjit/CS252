#include "output.h"
#include "calculate.h"
void outputScores(int scores[],int count, int maximum){
    cout <<right<<"Scores"<<setw(15)<<"Percentage"<<setw(18)<<"Grade";
    for (int i = 0;i<count;i++){
        cout <<endl;
        cout << right<<scores[i];
        cout <<setw(15)<<fixed<<setprecision(2)<<calcPercent(scores[i],maximum);
        cout << setw(20)<<calcGrade(calcPercent(scores[i],maximum));
    }
    cout<<endl;
}
