#include <stdio.h>

int main()
{
   int x,y;
   printf("Enter x :");
   scanf("%d",&x);
   printf("Enter y :");
   scanf("%d",&y);
   x*=y;
   printf("Multiplication: %d\n",x);
   x/=y;
   x/=y;
   printf("Division: %d\n",x);
   return 0;

}
