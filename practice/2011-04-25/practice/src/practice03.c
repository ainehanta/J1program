#include<stdio.h>
main(void)
{
  int a,b;

  printf("��������-3\n");

  printf("��Ĥ��ͤ����Ϥ��Ƥ���������\n");
  printf("A���� : ");  scanf("%d",&a);

  /*a=1;*/
  a=a+a;
  b=a+a;
  
  if(a != 0)
  {
  printf("A���ͤ�%d\n",a);
  printf("A����ܤ����ͤ�%d\n",b);
  }else{
    printf("0����ܤ����ͤ�0�Ǥ���\n");
  }

}
