#include<stdio.h>
main (void)
{
  int i=0,s=0,t,a;
  
  printf("���������Ϥ��Ƥ���������"); scanf("%d",&a);

  while (s < a)
  {
    i++;
    t=i*i;
    s=s+t;
  }

  printf("%d\n",i-1);
}
