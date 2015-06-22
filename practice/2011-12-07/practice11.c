#include <stdio.h>
main()
{
	int array[5] = {1,5,2,6,5};
	int i,i1,temp;

	for (i=0;i<5;i++)
	{
		printf("array[%d]=%d\n",i,array[i]);
	}

	for (i1=0;i1<=9;i++)
	{
		for (i=0;i<4;i++)
		{
			if (array[i] > array[i+1])
			{
				temp = array[i];
				array[i] = array[i+1];
				array[i+1] = temp;
			}
		}
	}

	for (i=0;i<5;i++)
	{
		printf("array[%d]=%d",i,array[i]);
	}
}

