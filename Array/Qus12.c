#include<stdio.h>
int main()
{
    int a[50], size,i, num, pos;
    printf("Enter the size of array:");
    scanf("%d", &size);
    printf("Enter the elements of array:");
    for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The elements are:");

    for(i=0; i<size; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nEnter the new number:");
    scanf("%d", &num);
    printf("Enter the position:");
    scanf("%d", &pos);

    for(i=size-1; i>=pos-1; i--)
    {
        a[i+1]= a[i];
    }
    a[pos-1]= num;
    size++;

    printf("The new elements are:");
    for(i=0; i<size; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;

}
