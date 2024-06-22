#include <stdio.h>

int main()
{

    float floatNumber;
    int intNumber;
    printf("Enter a float number:");
    scanf("%f", &floatNumber);
    printf("Enter an integer number:");
    scanf("%d", &intNumber);


    int convertedInt1 = floatNumber;
    printf("Assignment: %d\n", convertedInt1);


    int convertedInt2 = (int)floatNumber;
    printf("Type Casting(int): %d\n", convertedInt2);


    float convertedFloat1 = intNumber;
    printf("Assignment: %f\n", convertedFloat1);


    float convertedFloat2 = (float)intNumber;
    printf("Type Casting(float): %f\n", convertedFloat2);

    return 0;
}
