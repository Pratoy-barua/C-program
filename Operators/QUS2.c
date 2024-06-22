#include<stdio.h>
int main()
{
    float redius, area;
    printf("Enter the redius:");
    scanf("%f", &redius);

    area= 2* 3.1416 * redius;
    printf("The area is %.1f", area);
    return 0;
}
