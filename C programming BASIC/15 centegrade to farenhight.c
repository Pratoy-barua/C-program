#include<stdio.h>
int main()
{
    float c,F;
    printf("Enter centigrade=");
    scanf("%f", &c);

    F= (float)((c*9)/5) + 32;
    printf("The Farenhight= %.2f\n", F);
    getch ();
}
