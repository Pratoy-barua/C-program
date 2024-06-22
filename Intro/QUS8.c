#include<stdio.h>
int main()
{
    int firstvalue, secondvalue, thirdvalue;

    printf("Enter three numbers:");
    scanf("%d %d %d", &firstvalue, &secondvalue, &thirdvalue);

    printf("First value=%d\n", firstvalue);
    printf("Last value=%d\n", thirdvalue);
    return 0;
}
