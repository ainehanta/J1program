#include <stdio.h>
#include "graph.h"

main (void)
{
	int n,xn,yn,iy,ix,x,y;
	printf("模様の大きさを入力してください。:"); scanf("%d",&n);

	initGraph();

	xn = 640/n;
	yn = 480/n;

	y = 0;
	iy = 0;
	while(iy<=yn)
	{
		x = 0;
		ix = 0;
		while(ix<=xn)
		{
			if((iy%2)==0)
			{
				fillRectangle(x,y,x+n,y+n,BLACK);
				x += 2*n;
			}
			else
			{
				fillRectangle(x+n,y,x+2*n,y+n,BLACK);
				x += 2*n;
			}
			ix++;
		}
		y += n;
		iy++;
	}

	waitButtonPress();
	closeGraph();
}
