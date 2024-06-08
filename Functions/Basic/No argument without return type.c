#include<stdio.h>

void sum(void); //return_type Fun_name(Argument)

void main()

{
    sum();
}

void sum()
{
    int a=5, b=7, sum =0;
    sum = a+b;
    printf("Sum= %d", sum);
}
