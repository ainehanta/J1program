#include<stdio.h>
main(void)
{
  int a,b;

  printf("��������-4\n");

  printf("��Ĥ��ͤ����Ϥ��Ƥ���������\n");
  printf("A���� : ");  scanf("%d",&a);

  /* a=1;*/
  b=0;

  b=a+a;
  b=b+b;
  b=b+a;
  b=b+b;


  if(a != 0)
  {
  printf("A���ͤ�%d\n",a);
  printf("A���ͤ��ܤ�����B��%d\n",b);
  }else{
    printf("0���ܤ����ͤ�0�Ǥ���\n");
  }

}
