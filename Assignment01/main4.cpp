#include "read.cpp"
#include "sort.cpp"
#include "outputScores.cpp"
#include "outputSummary.cpp"
#define arraysize 30
using namespace std;
int main()
{
   int scores[arraysize];
   int count;
   int maximum;

   read(scores,count,maximum);
   sort(scores,count);
   outputScores(scores,count,maximum);
   outputSummary(scores,count,maximum);

   return 0;
}
