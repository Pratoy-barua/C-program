#include<stdio.h>
int main()
{
    int a[100], i,n,sum=0;
    printf("How many numbers:");
    scanf("%d", &n);
    printf("Enter the numbers:");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        sum= sum + a[i];
    }
    printf("The sum is: %d\n", sum);
    printf("Average is: %.2f", (float)sum/n);
    return 0;
}
