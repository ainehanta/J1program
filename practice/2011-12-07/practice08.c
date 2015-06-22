#include <stdio.h>

main()
{
	int a[10],i,t;

	for(i=0;i<10;i++)
	{
		a[i] = i;
		printf("a[%d] = %d\n",i,a[i]);
	}

	for(i=0;i<5;i++)
	{
		t = a[i];
		a[i] = a[9-i];
		a[9-i] = t;
	}

	for(i=0;i<10;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
	 
}
