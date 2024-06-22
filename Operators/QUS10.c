#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);

    int con1 = (a + b) <= 80;
    int con2 = !(a + c);
    int con3 = a != 0;

    printf("a) %d\n", con1);
    printf("b) %d\n", con2);
    printf("c) %d\n", con3);

    return 0;
}

