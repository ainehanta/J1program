#include<stdio.h>
main(void)
{
	int a,b,c,d;

	/*a=1;
	b=-3;
	c=5;*/
	d=0;

	printf("��������-9\n");

  printf("���Ĥ��ͤ����Ϥ��Ƥ���������\n");
  printf("A���� : ");  scanf("%d",&a);
  printf("B���� : ");  scanf("%d",&b);
  printf("C���� : ");  scanf("%d",&c);

	printf("A���ͤ�%d\n",a);
	printf("B���ͤ�%d\n",b);
	printf("C���ͤ�%d\n",c);

	if (a>0){
		d=d+a;
		}
	if (b>0){
		d=d+b;
		}
	if (c>0){
		d=d+c;
		}

	printf("A,B,C�Τ������ͤ����Τ�Τ���­������̤�%d\n",d);
}
