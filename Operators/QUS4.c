#include <stdio.h>
int main()
{
    int X,Y,A,B;
    printf("Enter a value:");
    scanf("%d", &X);
    printf("X++: %d\n", X++);

    printf("Enter a value:");
    scanf("%d", &Y);
    printf("++X: %d\n", ++Y);

    printf("Enter a value:");
    scanf("%d", &A);
    printf("X--: %d\n", A--);

    printf("Enter a value:");
    scanf("%d", &B);
    printf("--X: %d\n", --B);

    return 0;
}
