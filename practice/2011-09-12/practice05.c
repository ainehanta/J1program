#include<stdio.h>
main (void)
{
  int s=0;
  int a=4;

  while (1 <= a)
  {
    s=s+a;
    a--;
  }

  printf("%d\n",s);
}
