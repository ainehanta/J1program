#include<stdio.h>
main (void)
{
  int a=0,s=0;

  while(a >= 0)
  {
    printf("���������Ϥ��Ƥ���������"); scanf("%d",&a);

    if (a >= 0)
    {
      s=s+a;
    }
    else
    {
      a=-1;
    }
  }

  printf("��ס�%d\n",s);
}