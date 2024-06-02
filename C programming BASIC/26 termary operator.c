#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the cherecter:");
    scanf("%c", &ch);
    if(ch>=65 && ch<=90)
    {
        printf("Upper case");
    }
    else
    {
        printf("lower case");
    }

    return 0;
}
