#include<stdio.h>
int main()
{
    int a,b;
    int ch;
    printf("^^^^Calculator^^^^\n");
    printf("First Enter two numbers and then your choice\n");
    printf("Press 1 for Addition\n");
    printf("Press 2 for Subtraction\n");
    printf("Press 3 for Multiplication\n");
    printf("Press 4 for Division\n");
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Enter choice: ");
    scanf("%d",&ch);
switch(ch)
{
    case 1:
            printf("Addition is %d\n",a+b);
            break;
    case 2:
            printf("Sub. is %d\n",a-b);
            break;
    case 3:
            printf("Multi. is %d\n",a*b);
            break;
    case 4:
            printf("Division. is %d\n",a/b);
            break;
    default:
            printf("Try again with 1/2/3/4..\n");
}
    printf("Press any to exit\n");
    getch();
    return 0;
}
