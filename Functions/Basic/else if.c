#include<stdio.h>

void indian();
void french();

char main()
{
    char ch;
    printf("If you indian than type i or if you french then type f:");
    scanf("%c", &ch);
    if(ch=='i')
    {
        indian();
    }
    else if(ch=='f')
    {
        french();
    }
    else
    {
        printf("Invalid input, try again");
    }
    return 0;
}
void indian()
{
    printf("Namaste");
}
void french()
{
    printf("Bonjor");
}
