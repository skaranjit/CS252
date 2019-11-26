#include <iostream>
#include <iomanip>
using namespace std;
#ifndef output_h
#define output_h
void outputScores(int scores[30],int count, int maximum);
    //Prints out the scores from the list in the table form.
    //precondition : list of integer number , total number of list memeber as integer and maximum value should be provided.
    //postcondition: None
void outputSummary(int scores[],int count, int maximum);
    //Prints out he summary of the scores provided in the list like : median, high score, low score, etc
    //Precondition: list of integer number , total number of list memeber as integer and maximum value should be provided.
    //PostCondition: None

#endif
