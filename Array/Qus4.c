#include<stdio.h>
int main()
{
    int i, size;
    float a[100], sum=0, avg;
    printf("Enter the size of array:");
    scanf("%d", &size);
    printf("Enter the elements of array:");
    for(i=0; i<size; i++)
    {
        scanf("%f", &a[i]);
    }
    for(i=0; i<size; i++)
    {
        sum= sum + a[i];
    }
    avg= sum/size;
    printf("Avarage: %.2f", avg);
    return 0;
}
