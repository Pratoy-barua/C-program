#include<stdio.h>

int sum(void);

void main()
{
    int s;
    s= sum();
    printf("Sum = %d", s);
}

int sum()
{
    int a,b,sum=0;
    printf("Enter the value of A & B:");
    scanf("%d %d", &a, &b);
    sum = a+b;
    return sum; //if we write return sum,a; it will output a value because the comma after 'sum' return the value to 'a' value
}
