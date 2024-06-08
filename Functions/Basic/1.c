#include<stdio.h>
void sum()
{
    int a, b, sum=0;
    printf("Enter value of a:");
    scanf("%d", &a);
    printf("Enter value of b:");
    scanf("%d", &b);
    sum= a+b;
    printf("Sum= %d", sum);
}
void main()
{
    sum();
    printf("\n");
    sum();
    printf("\n");
    printf("Hello");
    printf("\n");
    sum();
}
