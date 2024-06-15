#include<stdio.h>
int main()
{
/*  char name[100];
    printf("Enter the name:");
    scanf("%s", name); // no need "&" it cant print white space
    printf("%s", name);
*/


    char name1[100];
    printf("Enter the name:");
    gets(name1); // it can print white space
    printf("%s", name1);
    return 0;

}
