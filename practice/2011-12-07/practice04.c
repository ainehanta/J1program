#include<stdio.h>

main()
{
	int i,array[10];

	for (i=0;i<10;i++)
	{
		array[i] = i;
		printf("array[%d] = %d\n",i,array[i]);
	}
}
