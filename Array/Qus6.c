#include<stdio.h>
int main()
{
    int a[100], b[100], sum[100], size, i;
    printf("Enter the size of array:");
    scanf("%d", &size);
    printf("Enter the 1st array elements:");
    for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the 2nd array elements:");
    for(i=0; i<size; i++)
    {
        scanf("%d", &b[i]);
    }
    for(i=0; i<size; i++)
    {
        sum[i]= a[i]+ b[i];
    }
    for(i=0; i<size; i++)
    {
        printf("%d ", sum[i]);
    }

    return 0;
}
