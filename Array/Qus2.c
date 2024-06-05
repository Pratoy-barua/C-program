#include<stdio.h>
int main()
{
    int a[100], i, n, size, sum=0;
    printf("Enter the size of array:");
    scanf("%d", &size);
    printf("Enter the elements of array:");
    for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Sum:");
    for(i=0; i<size; i++)
    {
        sum= sum + a[i];
    }
    printf("%d", sum);
    return 0;
}
