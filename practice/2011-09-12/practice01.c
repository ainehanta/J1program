#include<stdio.h>
main (void)
{
  int i=1,s=0;
  int a=4;

  while (i <= a)
  {
    s=s+i;
    i++;
  }

  printf("%d\n",s);
}
