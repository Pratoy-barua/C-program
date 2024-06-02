#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch>=65 && ch<=90) //A= 65 to Z= 90
     {
        printf("Upper case");
     }
    else if(ch>=97 && ch<=122) //a=97 to z= 122
     {
        printf("Lower case");
     }
    else if (ch>=48 && ch<=57) //0= 48 to 9= 57
     {
         printf("Number");
     }
     else
     {
         printf("special char");
     }

    return 0;
}
