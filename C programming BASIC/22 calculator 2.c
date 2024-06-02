#include<stdio.h>
int main()
{
    int a,b,c;
    char ch;
    printf("<<<<<CALCULATOR>>>>>\n");
    printf("Enter two numbers\n");
    printf("For Addition press 1\n");
    printf("For Subtraction press 2\n");
    printf("For Multiplication press 3\n");
    printf("For Division press 4\n");
    printf("If choice is 4 then press again...\n");
    printf("Press q for quotient\n");
    printf("Press r for reminder\n");
    printf("Enter 1st number:");
    scanf("%d", &a);
    printf("Enter 2nd number:");
    scanf("%d", &b);
    printf("Enter choice:");
    fflush(stdin);
    scanf("%d", &c);
    switch(c)
    {
    case 1:
        printf("The addition is %d", a+b);
        break;
    case 2:
        printf("The subtraction is %d", a-b);
        break;
    case 3:
        printf("The multiplication is %d", a*b);
        break;
    case 4:
        printf("Enter your choice between q and r:");
        fflush(stdin);
        scanf("%c", &ch);
        switch(ch)
        {
        case 'q':
            printf("The quotient is %d", a/b);
            break;
        case 'r':
            printf("The reminder is %d", a%b);
            break;
        default:
            printf("Try again with q or r\n");
        }
        default:
            printf("\nPress 1/2/3/4");

    }
    printf("\nPress any to exit");
    getch();
    return 0;
}
