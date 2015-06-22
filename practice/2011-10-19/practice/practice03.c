#include <stdio.h>
#include "graph.h"

main (void)
{
	int x,y,r;
	printf("中心座標を入力してください。\n");
	printf("x:"); scanf("%d",&x);
	printf("y:"); scanf("%d",&y);
	printf("半径を入力してください。");
	printf("r:"); scanf("%d",&r);

	initGraph();
	drawCircle(x-r,y,r,BLUE);
	drawCircle(x+r,y,r,RED);
	waitButtonPress();
	closeGraph();
}
