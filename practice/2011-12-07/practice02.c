#include<stdio.h>

main(void)
{
	int array[10],i;

	i = 0;
	while (i<10)
	{
		array[i] = 0;
		i++;
	}

	i = 0;
	while (i<10)
	{
		printf("array[%d] = %d\n",i,array[i]);
		i++;
	}
}
