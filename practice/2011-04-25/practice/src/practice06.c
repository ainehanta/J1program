#include<stdio.h>
main(void)
{
  int a,b,c,d;

  printf("��������-6\n");

  /*a=1;
  b=2;
  c=3;*/
  d=0;

  printf("���Ĥ��ͤ����Ϥ��Ƥ���������\n");
  printf("A���� : "); scanf("%d",&a);
  printf("B���� : "); scanf("%d",&b);
  printf("C���� : "); scanf("%d",&c);

  printf("A�θŤ��ͤ�%d\n",a);
  printf("B�θŤ��ͤ�%d\n",b);
  printf("C�θŤ��ͤ�%d\n",c); 

  d=a;
  a=c;
  c=b;
  b=d;

  printf("A�������ؤ����ͤ�%d\n",a);
  printf("B�������ؤ����ͤ�%d\n",b);
  printf("C�������ؤ����ͤ�%d\n",c);
}
