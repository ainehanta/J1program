#include <stdio.h>
main (void)
{
  int i=1,s=1,t=0;
  int a;

  printf("���������Ϥ��Ƥ���������"); scanf("%d",&a);

  while (i <= a)
  {
    s=s*i;
    i++;
  }

  printf("%d\n",s);
}
