#include<Stdio.h>
int main()
{
    int i=0,n;
    printf("Enter the number:");
    scanf("%d", &n);
    while(i<=n)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}
