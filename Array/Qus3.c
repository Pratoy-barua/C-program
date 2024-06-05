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
    for(i=0; i<size; i++)
    {
        if(a[i]%2==0)
        {
            sum=sum+ a[i];
        }
    }
    printf("Sum: %d", sum);
    return 0;
}
