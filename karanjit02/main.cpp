#include "calculate.h"
#include "output.h"
#include "sort.h"
#include "read.h"

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
