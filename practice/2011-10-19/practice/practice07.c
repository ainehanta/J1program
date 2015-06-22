#include <stdio.h>
#include "graph.h"

main(void)
{
	int x=20,y=20;

	initGraph();

	while (y<=480)
	{
		x=20;
		while (x<=640)
		{
			drawCircle(x,y,20,BLACK);
			x=x+40;
		}
		y=y+40;
	}

	waitButtonPress();
	closeGraph();
}

