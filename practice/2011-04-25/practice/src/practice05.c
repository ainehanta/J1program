#include<stdio.h>
main(void)
{
  int a,b,c;

  printf("��������-5\n");

  printf("��Ĥ��ͤ����Ϥ��Ƥ���������\n");
  printf("A���� : ");  scanf("%d",&a);
  printf("B���� : ");  scanf("%d",&b);

  /* a=1;
     b=2;*/
  c=0;

  printf("A�θŤ��ͤ�%d\n",a);
  printf("B�θŤ��ͤ�%d\n",b);

  c=a;
  a=b;
  b=c;

  printf("A�������ؤ����ͤ�%d\n",a);
  printf("B�������ؤ����ͤ�%d\n",b);
}
