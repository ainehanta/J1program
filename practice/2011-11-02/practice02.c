#include <stdio.h>
#include "graph.h"

main(void)
{
	int a,b,c,xn,x,y;
	printf("a���ͤ����Ϥ��Ƥ���������:"); scanf("%d",&a);
	printf("b���ͤ����Ϥ��Ƥ���������:"); scanf("%d",&b);
	printf("c���ͤ����Ϥ��Ƥ���������:"); scanf("%d",&c);
	printf("ɽ������x���ͤ����Ϥ��Ƥ���������:"); scanf("%d",&xn);

	initGraph();

	x = 1;
	while(x<=xn)
	{
		y = a*x*x+b*x+c;
		fillRectangle(x,469-y,x+10,479-y,GREEN);
		x++;
	}

	waitButtonPress();
	closeGraph();
}
