#include<stdio.h>
void sum(); //function declaration

void main() //function calling
{
    sum();
}

void sum() //function defination
{
    int a, b, sum=0;
    printf("Enter the value of A:");
    scanf("%d", &a);
    printf("Enter the value of B:");
    scanf("%d", &b);
    sum= a+b;
    printf("Sum= %d", sum);

}
