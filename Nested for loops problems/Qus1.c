#include<stdio.h>
int main()
{
    int row, col, n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n; col++)
        {
            printf("%d", col);
        }
        printf("\n");
    }
    return 0;
}
