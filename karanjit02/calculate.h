#ifndef calculate_h
#define calculate_h
//Function to calculate Average of a list or an array.
float calcAvg (int scores[],int count);
    //Calculate average from scores list and returns the float number that is the average score in the list.
    //Pre-Condition: List of score that have the value integets  and total number of item in the list as integer should be provided.
    //Post-Condition: Returns float number after calculating the average from provided list.
char calcGrade(float percent);
    //Return the char of grade letter after evaluating percent provided.
    //Precondition : Percentage (float number) should be provided to be evaluated.
    //Post Condition : Returns character of the grade.
float calcMedian(int scores[],int count);
    //Return float number which is the median of the numbers in the list provided.
    //Precondition: List of score that have the value integets  and total number of item in the list as integer should be provided.
    //PostCOndition : Returns the float number which is the median of the numbers in the list provided.
float calcPercent(int score, int maximum);
    //Returns the float number after calculating the percentage of the provided scores and maximun
    //Precondition: 2 integer number should be provide, One will be the score and other will be maximum.
    //postcondition: Returns the float number after calculating the percentage of the provided scores and maximun

#endif