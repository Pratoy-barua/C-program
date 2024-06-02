#include<stdio.h>
int main()
{
    int num1, num2, sum;
    printf("Please enter two numbers:");
    scanf("%d %d", &num1, &num2);

    sum= num1 + num2;
    printf("The sum is= %d\n", sum);
    getch();
}
