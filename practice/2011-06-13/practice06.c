#include<stdio.h>
main(void)
{
	printf("2011-06-13-05-OR\n");
	int a,b,o;
	printf("A�����Ϥ����ͤ����Ϥ��Ƥ�����������0��1��"); scanf("%d",&a);
	printf("B�����Ϥ����ͤ����Ϥ��Ƥ�����������0��1��"); scanf("%d",&b);

	if (a<=1)
	  if (a>=0)
	    if (b<=1)
	      if (b>=0)
	      {
		if (a==1)
		  o=1;
		if (b==1)
		  o=1;
		printf("���Ϥ�%d�Ǥ���\n",o);
	      }
	      else
	      {
		printf ("0��1�����Ϥ��Ƥ���������\n");
	      }
}
		
