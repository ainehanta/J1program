#include <stdio.h>
#include "graph.h"
main(void)
{
	int r,x,y;

	printf("�ߤ�Ⱦ�¤����Ϥ��Ƥ������� :"); scanf("%d",&r);

	initGraph();

	y = 0;
	while(y<=(479-2*r))
	{
		y += r;
		x = 0;
		while(x<=(639-2*r))
		{
			x += r;
			drawCircle(x,y,r,BLACK);
			x += r;
		}
		y += r;
	}

	waitButtonPress();
	closeGraph();
}
