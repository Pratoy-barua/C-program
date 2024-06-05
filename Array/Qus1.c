#include<stdio.h>
int main()
{
    int a[100], size, n, i;
    printf("Enter the size of array:");
    scanf("%d", &size);
    printf("Enter the elements of array:");
    for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=size-1; i>=0; i--)
    {
        printf("%d ", a[i]);
    }
    return 0;

}
