#include <stdio.h>
main (void)
{
  int i=1,s=1,t=0;
  int a;

  printf("整数を入力してください。"); scanf("%d",&a);

  while (i <= a)
  {
    s=s*i;
    i++;
  }

  printf("%d\n",s);
}
