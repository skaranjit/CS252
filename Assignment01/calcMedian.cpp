//Function to calculate Median score from a sorted list or array
float calcMedian(int scores[],int count){
    if (count%2 != 0) return scores[(count+1)/2];
    else{
        float n,m,median;
        n=scores[count/2];
        m=scores[(count+2)/2];
        median = (n+m)/2;
        return median;
    }
}
