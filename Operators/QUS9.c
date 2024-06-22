#include <stdio.h>

int main()
{
  int a,b,c,x,y,z;
  printf("Enter the value of a:");
  scanf("%d", &a);
  printf("Enter the value of b:");
  scanf("%d", &b);
  printf("Enter the value of c:");
  scanf("%d", &c);

  x=a-b/3+c*2-1;
  printf("x=%d\n",x);

  y=a-(b/(3+c)*2)-1;
  printf("y=%d\n",y);

  z=a-((b/3)+c*2)-1;
  printf("z=%d\n",z);

}
