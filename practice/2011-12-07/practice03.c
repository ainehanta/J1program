#include <stdio.h>
#include "graph.h"

main(void)
{
	int i;
	int array[10] = {10,102,20,50,64,0,85,50,12,10};

	initGraph();

	for(i=0;i<10;i++)
	{
		fillRectangle(i*10,479,i*10+40,479-array[i],BLACK);
	}

	waitButtonPress();

	closeGraph();
}
