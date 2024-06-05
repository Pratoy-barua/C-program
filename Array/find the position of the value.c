#include<stdio.h>
int main()
{
    int num[]= {12,4,33,4,55,21};
    int value, pos=-1, i;
    printf("Enter the value you want to find:");
    scanf("%d", &value);
    for(i=0; i<=6; i++)
    {
        if(value==num[i])
        {
            pos= i+1;
            break;
        }
    }
        if(pos==-1)
        {
            printf("Value is not found");
        }
        else
        {
            printf("The position is %d", pos);
        }
        return 0;


}
