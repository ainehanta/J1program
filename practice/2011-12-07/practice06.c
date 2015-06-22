#include <stdio.h>

main()
{
	int a[10],b[10],i;

	for(i=0;i<10;i++)
	{
		a[i] = i;
		printf("a[%d] = %d\n",i,a[i]);
	}

	for(i=0;i<10;i++)
	{
		b[i] = a[i];
		printf("b[%d] = %d\n",i,b[i]);
	}
}
