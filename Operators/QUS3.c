#include<stdio.h>
int main()
{
    float a,b,X;
    printf("Enter the value of a:");
    scanf("%f", &a);
    printf("Enter the value of b:");
    scanf("%f", &b);

    X= (3.31 * a*a + 2.01 * b*b*b) / (7.16 * b*b + 2.01 * a*a*a);
    printf("X = %f", X);
    return 0;

}
