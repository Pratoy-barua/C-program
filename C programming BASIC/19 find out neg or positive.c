#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n>0)
        {printf("%d is positive\n", n);}
    else if(n<0)
        {printf("%d is nagetive\n", n);}
    else
        {printf("ZERO");}
    return 0;
}
