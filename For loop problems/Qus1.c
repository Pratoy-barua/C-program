/* 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14,……
*/
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        printf("%d,", i);
    }
    return 0;
}
