#include<stdio.h>

char fun();

void main()
{
    char ch; //value storring
    ch=fun();
    char fun();
}
char fun()
{
    char c;
    printf("Enter c character:");
    scanf("%c", &c);
    printf("%c", c);
    return c;
}
