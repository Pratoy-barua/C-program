#include<stdio.h>
int main()
{
     int a[5], i, sum=0;
     a[0]= 10;
     a[1]= 20;
     a[2]= 30;
     a[3]= 40;
     a[4]= 50;
     for(i=0; i<=4; i++)
     {
         sum= sum+a[i];
     }
     printf("The sum is: %d\n", sum);
     printf("The average is: %.2f\n", (float)sum/5);
     return 0;
}
