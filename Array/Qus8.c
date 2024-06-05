#include<stdio.h>
int main()
{
    int a[100], size, i, max, min, max_index, min_index;
    printf("Enter the size of array:");
    scanf("%d", &size);
    printf("Enter the elements of array:");
    for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }
    max= a[0];
    min= a[0];
    for(i=0; i<size; i++)
    {
        if(a[i]> max)
        {
            max= a[i];
            max_index= i;
        }
        if(a[i]< min)
        {
            min= a[i];
            min_index= i;
        }
    }
    printf("Max: %d max_index: %d", max, max_index);
    printf("\nMin: %d min_index: %d", min, min_index);
    return 0;
}
