#include <stdio.h>
int main()
{
    int X,Y;
    printf("Enter Two value:");
    scanf("%d %d", &X,&Y);

    if(X>Y)
  {
       printf ("Max :%d",X);
  }
    else if (Y>X)
  {
      printf ("Max :%d",Y);
  }
    else
  {
      printf ("Numbers are Equal.");
  }

return 0;
}
