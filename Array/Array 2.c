#include<stdio.h>
int main()
{
    int a[5], i, sum=0;
    printf("Enter 5 numbers:");
    for(i=0; i<=4; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<=4; i++)
    {
        sum= sum + a[i];
    }
    printf("The sum is: %d\n", sum);
    printf("Average is: %.2f", (float)sum/5);
    return 0;
}
