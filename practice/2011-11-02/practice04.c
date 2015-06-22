#include <stdio.h>
#include "graph.h"

main(void)
{
	int n,r;

	printf("円の数を入力してください :"); scanf("%d",&n);

	initGraph();

	n = 2 * n;
	while(0<=n)
	{
		r = n*20;
		if(n%2)
		{
			fillCircle(320,240,r,WHITE);
		}
		else
		{
			fillCircle(320,240,r,BLACK);
		}
		n--;
	}

	waitButtonPress();
	closeGraph();
}
