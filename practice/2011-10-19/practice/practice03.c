#include <stdio.h>
#include "graph.h"

main (void)
{
	int x,y,r;
	printf("�濴��ɸ�����Ϥ��Ƥ���������\n");
	printf("x:"); scanf("%d",&x);
	printf("y:"); scanf("%d",&y);
	printf("Ⱦ�¤����Ϥ��Ƥ���������");
	printf("r:"); scanf("%d",&r);

	initGraph();
	drawCircle(x-r,y,r,BLUE);
	drawCircle(x+r,y,r,RED);
	waitButtonPress();
	closeGraph();
}
