#include<stdio.h>

int greater_less()
{
    int x,y;
    printf("Enter 1st number:");
    scanf("%d", &x);
    printf("Enter 2nd number:");
    scanf("%d", &y);
    if(x>y)
    {
        printf("%d is greater than %d", x,y);
    }
    else if(x<y)
    {
        printf("%d less than %d", x,y);
    }
    else
    {
        printf("%d is equal to %d", x,y);
    }
}

int main()
{
    greater_less();
}

