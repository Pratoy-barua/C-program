#include<stdio.h>

void fun(int, int);

void main()
{
    int a,b;
    printf("Enter the value of a & b:");
    scanf("%d %d", &a, &b);
    fun(a,b);
}

void fun(int x, int y)
{
    int sum=0;
    sum = x+y;
    printf("Sum= %d", sum);
}
