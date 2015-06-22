#include <stdio.h>
#include "graph.h"

main(void)
{
	int a,b,c,xn,x,y;
	printf("aの値を入力してください。:"); scanf("%d",&a);
	printf("bの値を入力してください。:"); scanf("%d",&b);
	printf("cの値を入力してください。:"); scanf("%d",&c);
	printf("表示するxの値を入力してください。:"); scanf("%d",&xn);

	initGraph();

	x = 1;
	while(x<=xn)
	{
		y = a*x*x+b*x+c;
		fillRectangle(x,469-y,x+10,479-y,GREEN);
		x++;
	}

	waitButtonPress();
	closeGraph();
}
