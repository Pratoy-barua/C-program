#include<stdio.h>
int main()
{
    float base, hight, area;
    printf("Base=");
    scanf("%f", &base);

    printf("Hight=");
    scanf("%f", &hight);

    area= (float)1/2  * base * hight; //float likhar karon: 1/2 ekta float number r integer er shate gun kora hocce ty
    printf("Area= %.2f\n", area);
    getch();
}
