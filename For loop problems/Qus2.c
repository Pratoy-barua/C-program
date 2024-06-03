/*1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31……
*/
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        printf("%d,", 2*i-1);
    }
    return 0;
}
