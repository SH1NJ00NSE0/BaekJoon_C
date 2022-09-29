#include <stdio.h>

int sumCalc(int n)
{
   int i, a, sum = 0;
   for (i = 0; i < n; i++)
   {
      scanf("%d", &a);
      sum += a;
   }
   return sum;
}

int main()
{
   int n;
   scanf("%d", &n);
   printf("%d", sumCalc(n));
   return 0;
}