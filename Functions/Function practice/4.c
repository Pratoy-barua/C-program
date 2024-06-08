#include<stdio.h>

int pos_neg()
{
    int x;
    printf("Enter a number:");
    scanf("%d", &x);
    if(x>0)
    {
        printf("Positive");
    }
    else if(x==0)
    {
        printf("Zero");
    }
    else
    {
        printf("Negative");
    }
}

int main()
{
    pos_neg();
}
