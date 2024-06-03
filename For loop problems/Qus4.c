/*
Write a program (WAP) that will take N numbers as inputs and compute their average.
*/
#include<stdio.h>
int main()
{
    int i,n;
    float num, sum=0;
    printf("Enter the value of n:");
    scanf("%d", &n);
    printf("Enter the numbers:");
    for(i=1; i<=n; i++)
    {
        scanf("%f", &num);
        sum=sum+num;
    }
    float avg;
    avg= sum/n;
    printf("The average is: %.2f", avg);
    return 0;
}
