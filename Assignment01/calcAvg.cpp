//Function to calculate Average of a list or an array.
float calcAvg (int scores[],int count){
    int sum=1;
    for (int i=0;i<count;i++){
        sum += scores[i];
    }
    return (sum/count);
}