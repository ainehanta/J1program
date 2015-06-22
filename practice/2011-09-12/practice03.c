#include<stdio.h>
main (void)
{
  int i=1,s=0,t=0;
  int a=4;

  while (i <= a)
  {
    t=i*i;
    s=s+t;
    printf("i=%d,s=%d\n",i,s);
    i++;
  }

  printf("%d\n",s);
}
