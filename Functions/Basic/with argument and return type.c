#include<stdio.h>

int sum(int, int);

void main()
{
    int a,b,s;
    printf("Enter the value of A & B:");
    scanf("%d %d", &a, &b);
    s= sum(a,b);
    printf("Sum= %d", s);
}

int sum(int a, int b)
{
    int sum=0;
    sum = a+b;
    return sum;
}
