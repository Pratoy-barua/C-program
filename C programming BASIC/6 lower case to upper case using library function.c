#include<stdio.h>
int main()
{
    char lower,upper;
    printf("Enter any lowercase letter:");
    scanf("%c", &lower);

    upper= toupper(lower);
    printf("The upper case is: %c", upper);

    getch();
}
