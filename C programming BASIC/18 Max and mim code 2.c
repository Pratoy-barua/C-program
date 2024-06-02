#include <stdio.h>
int main()
{
   int a,b,c;
   scanf("%d %d %d", &a, &b, &c);
   if (a>=b && a>=c)
   {
        printf("%d is max\n", a);
   }
   else if (b>=a && b>=c)
   {
        printf("%d is max\n", b);
   }
   else
   {
       printf("%d is max\n", c);
   }

       //this is for minimum
   if (a<=b && a<=c)
   {
        printf("%d is min\n", a);
   }
   else if (b<=a && b<=c)
   {
        printf("%d is min\n", b);
   }
   else
   {
       printf("%d is min\n", c);
   }

       return 0;
   }
