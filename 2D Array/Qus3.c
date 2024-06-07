#include<Stdio.h>
int main()
{
    int a[100][100];
    int row, col, Deternimet;

    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            printf("A[%d][%d]=", row,col);
            scanf("%d", &a[row][col]);
        }
    }
    printf("\n");
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            printf("%d", a[row][col]);
        }
        printf("\n");
    }

    Deternimet= a[0][0]*((a[1][1]*a[2][2])-(a[2][1]*a[1][2])) - a[0][1]*((a[1][0]*a[2][2])-(a[2][0]*a[1][2])) + a[0][2]*((a[1][0]*a[2][1])-(a[2][0]*a[1][1])) ;
    printf("\nDeterminant: %d", Deternimet);
    return 0;
}
