#include<stdio.h>
main(void)
{
  int a,b;

  printf("��������-2\n");

  printf("��Ĥ��ͤ����Ϥ��Ƥ���������");
  printf("A���� : ");  scanf("%d",&a);

  /*a=2;*/
  b=a*2;

  if(a != 0)
  {
  printf("A���ͤ�%d\n",a);
  printf("A���ͤ����ܤ�����B��%d\n",b);
  }else{
    printf("0�����ܤ����ͤ�0�Ǥ���\n");
  }
}
