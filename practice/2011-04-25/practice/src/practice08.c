#include<stdio.h>
main(void)
{
	int a,b,c;

	/*a=4;
	  b=1;*/

	printf("��������-8\n");

  printf("��Ĥ��ͤ����Ϥ��Ƥ���������\n");
  printf("A���� : ");  scanf("%d",&a);
  printf("B���� : ");  scanf("%d",&b);

	printf("A���ͤ�%d\n",a);
	printf("B���ͤ�%d\n",b);

	if (a>b){
		c=a;
		a=b;
		b=c;
		}

	printf("�⤷A>B�ʤ��A��B���򴹤��줿�ͤˤʤꡢ\n����ʳ��ʤ餽�Τޤޤ�A��B���ͤˤʤ롣\n");
	printf("A���ͤ�%d\n",a);
	printf("B���ͤ�%d\n",b);
}
