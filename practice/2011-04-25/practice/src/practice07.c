#include<stdio.h>
main(void)
{
	int a,b,c;

	printf("��������-7\n");
	
	/*a=-1;
	  b=4;*/

  printf("��Ĥ��ͤ����Ϥ��Ƥ���������\n");
  printf("A���� : ");  scanf("%d",&a);
  printf("B���� : ");  scanf("%d",&b);

	printf("A���ͤ�%d\n",a);
	printf("B���ͤ�%d\n",b);
	
	if (a<0){
		a*-1;
		}
	if (b<0){
		b*-1;
		}
	if (a<b){
		c=b;
		}else if (b<a){
			c=a;
			}else{
                        c=a;
                        }

	printf("A�������ͤ�%d\n",a);
	printf("B�������ͤ�%d\n",b);
	printf("�����ͤ��礭�����������ͤޤ���\n�����ͤ�Ʊ�����������ͤ�%d\n",c);
}
