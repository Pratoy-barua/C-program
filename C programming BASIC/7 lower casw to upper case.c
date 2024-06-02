#include<stdio.h>
int main()
{
    char lower;
    printf("Enter any lowercase character:");
    scanf("%c", &lower);

    printf("The uppercase is: %c", lower-32);
    getch();
}
