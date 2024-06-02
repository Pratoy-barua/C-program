#include<stdio.h>
int main()
{
    int num1, num2, result;
    float avg;

    printf("enter two numbers:");
    scanf("%d %d", &num1, &num2);

    result= num1 + num2;
    printf("The sum is= %d\n", result);

    result= num1 - num2;
    printf("The sub is= %d\n", result);

    result= num1 * num2;
    printf("The mul is= %d\n", result);

    result= num1 / num2;
    printf("The div is= %d\n", result);

    result= num1 % num2; //%= vagses
    printf("The reminder is= %d\n", result);

    avg= (float)result/2;
    printf("The avarage is=%.2f\n", avg);



}
