#include<stdio.h>

int even_odd()
{
    int x;
    printf("Enter a number:");
    scanf("%d", &x);
    if(x%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}

int main()
{
    even_odd();
}
