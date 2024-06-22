#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter two number:");
    scanf("%d %d", &x, &y);
    printf("Addition: %d\n", x+y);
    printf("Subtraction: %d\n", x-y);
    printf("Multiplication: %d\n", x*y);
    printf("Quotient: %d\n", x/y);
    printf("Reminder: %d", x%y);
    return 0;
}

