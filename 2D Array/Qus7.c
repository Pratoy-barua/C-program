#include<stdio.h>
int main()
{
    int i, j, sum=0;
    int a[3][3], b[3][3];
    int c[3][3];

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            for(int k=0; k<3; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
            c[i][j] = sum;
            sum =0;

        }
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
