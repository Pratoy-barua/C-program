#include<stdio.h>
int main()
{
    int a[100], size, i, num, index_pos, num2;
    printf("Enter the size of array:");
    scanf("%d", &size);
    printf("Enter the elements or array:");
    for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the value you want to search:");
    scanf("%d", &num);
    for(i=0; i<size; i++)
    {
        if(num==a[i])
        {
            index_pos=i;
            num2=1;
        }

    }
    if(num2==1)
    {
        printf("Found at index position %d", index_pos);
    }
    else
    {
        printf("NOT FOUND");
    }
    return 0;
}
