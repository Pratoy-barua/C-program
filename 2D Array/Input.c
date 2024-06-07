#include<stdio.h>
int main()
{
    int row, col;
    int a[3][4];
    for(row=0; row<3; row++)
    {
        for(col=0; col<4; col++)
        {
            printf("a[%d] [%d]=", row,col);
            scanf("%d", &a[row][col]);
        }
        printf("\n");
    }
     for(row=0; row<3; row++)
    {
        for(col=0; col<4; col++)
        {
            printf("%d", a[row][col]);
        }
        printf("\n");
    }
  return 0;
}
