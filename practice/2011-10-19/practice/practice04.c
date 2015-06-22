#include <stdio.h>
#include "graph.h"

main (void)
{
	int i=1;
	initGraph();

	while (i<=10)
	{
		drawCircle(320,240,i*10,BLACK);
		i++;
	}

	waitButtonPress();
	closeGraph();
}
