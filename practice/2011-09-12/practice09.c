#include<stdio.h>
main (void)
{
  int a=0,s=0,i=0;

  while(a >= 0)
  {
    printf("���������Ϥ��Ƥ���������"); scanf("%d",&a);

    if (a >= 0)
    {
      s=s+a;
      i++;
    }
    else
    {
      a=-1;
    }
  }

  printf("��ס�%d��ʿ�ѡ�%d\n",s,s/i);
}
