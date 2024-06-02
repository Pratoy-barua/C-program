#include <stdio.h>
int main()
{
   int a,b;
   scanf("%d %d", &a, &b);
   if (a>=b)
   {
        printf("%d is max\n", a);
   }

   else
   {
       printf("%d is max\n", b);
   }

       //this is for minimum
   if (a<=b)
   {
        printf("%d is min\n", a);
   }

   else
   {
       printf("%d is min\n", b);
   }

       return 0;
   }

