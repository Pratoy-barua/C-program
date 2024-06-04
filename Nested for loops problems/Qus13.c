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
            if(row==1 || row==n)
            {
                printf("Z");
            }
            else
            {
                if(col<n-row+1)
                {
                    printf(" ");
                }
                else if(col==n-row+1)
                {
                    printf("Z");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
