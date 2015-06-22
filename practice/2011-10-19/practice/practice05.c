#include <stdio.h>
#include "graph.h"

main (void)
{
	int i=1;
	initGraph();

	while (i<=9)
	{
		switch (i%3)
		{
		case 0 : drawCircle(60*i+20,240,30,GREEN); break;
		case 1 : drawCircle(60*i+20,240,30,BLUE);  break;
		case 2 : drawCircle(60*i+20,240,30,RED);   break;
		}
		i++;
	}
	waitButtonPress();
	closeGraph();
}
