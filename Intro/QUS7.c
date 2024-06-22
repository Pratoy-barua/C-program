#include<stdio.h>
int main()
{
    int x;
    float y;
    char ch;
    printf("Enter an integer:");
    scanf("%d", &x);
    printf("The integer value:%d\n", x);

    printf("Enter an float:");
    scanf("%f", &y);
    printf("The integer value:%.2f\n", y);

    printf("Enter an charecter:");
    fflush(stdin);
    scanf("%c", &ch);
    printf("The charecter value:%c", ch);

    return 0;
}

