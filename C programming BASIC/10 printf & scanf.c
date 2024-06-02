#include<stdio.h>
int main()
{
    int num1;
    float num2;
    printf("Please enter and integer and a floating number: ");
    scanf("%d %f", &num1, &num2);
    printf("The numbers are: %d %.2f\n",num1,num2);
    getch();
}
