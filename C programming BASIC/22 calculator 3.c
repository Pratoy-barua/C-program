#include<stdio.h>
int main()
{
    int a,b;
    char ch, divisionoption;
    printf("^^^^Calculator^^^^\n");
    printf("First Enter two numbers and then your choice\n");
    printf("Press + for Addition\n");
    printf("Press - for Subtraction\n");
    printf("Press * for Multiplication\n");
    printf("Press / for Division\n");
    printf("If choice is / then again...\n");
    printf("Press q for Quotient\n");
    printf("Press r for Remainder\n");
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Enter choice: ");
    fflush(stdin); //enter k jeno input hishebe na nay
    scanf("%c",&ch);
switch(ch)
{
    case '+' :
            printf("Addition is %d\n",a+b);
            break;
    case '-' :
            printf("Sub. is %d\n",a-b);
            break;
    case '*' :
            printf("Multi. is %d\n",a*b);
            break;
    case '/' :
            printf("Enter choice q / r: ");
            fflush(stdin); //enter k jeno input hishebe na nay
            scanf("%c", &divisionoption);

            switch (divisionoption)
            {
                case 'q':
                    printf("Quotient is %d\n", a/b); // Quotient
                    break;
                case 'r':
                    printf("Remainder is %d\n", a%b); // Remainder
                    break;
                default:
                    printf("Try again with q/r\n");
            }

    default:
            printf("Try again with +or-or*or/..\n");
}
    printf("Press any to exit\n");
    getch();
    return 0;
}


