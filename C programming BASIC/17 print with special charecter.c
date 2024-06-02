#include<stdio.h>
int main()
{ //print (/\n"Hello       worldn"/\) //
    //‘\n’ = newline, ‘\t’= tab, ‘\\’ = backlash, ‘\”’ = double quotes.//

    char a,b,c,d;
    a= '//';
    b= '\\';
    c= '\"';
    d= '\t';
    printf("%c%cn%cHello%cworldn%c%c%c", a,b,c,d,c,a,b);
    getch();
}
