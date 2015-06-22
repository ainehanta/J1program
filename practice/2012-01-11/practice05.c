#include <stdio.h>
main()
{
	int i1,i2;
	int a[4][10];

	for (i1=0;i1<4;i1++)
	{
		for (i2=0;i2<10;i2++)
		{
			a[i1][i2] = i1*i2;
		}
	}

	for (i1=0;i1<4;i1++)
	{
		for (i2=0;i2<10;i2++)
		{
			printf("a[%d][%d] = %d",i1,i2,a[i1][i2]);
		}
		printf("\n");
	}
}
