// sort an array of ints descendingly

void sort(int numbers[], int n)
{
   int temp;
   int large;
   for (int i=0; i<n-1; i++)  // put n-1 ints in their correct spot
   {
      large=i;
      for (int j=i+1; j<n; j++)  // loop to find the largest
         if (numbers[j] > numbers[large])
            large=j;
      temp = numbers[i];         // put largest into proper position
      numbers[i] = numbers[large];
      numbers[large] = temp;
   }
}

