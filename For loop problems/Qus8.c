#include<stdio.h>
int main()
{
    int i,num, count=0;
    printf("Enter a number:");
    scanf("%d", &num);
    for(i=2; i<=num; i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
    {
        printf("Prime number");
    }
    else if(num<=1)
    {
        printf("Not prime");
    }
    else
    {
        printf("Not prime");
    }
    return 0;

}
