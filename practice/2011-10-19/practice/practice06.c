#include <stdio.h>
#include "graph.h"

main (void)
{
	int i=1,s=0,n=1,t;
	printf("回数を入力してください。: "); scanf("%d",&t);
	initGraph();

	while (i<=t)
	{
		fillRectangle(s,479,s+10,479-n,BLUE);
		i++;
		n=n+i;
		s=s+10;
	}
	waitButtonPress();
	closeGraph();
}
