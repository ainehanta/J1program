#include <stdio.h>
main()
{
	int i1,i2,i3;
	int a[3][10][5];

	for (i1=0;i1<3;i1++)
	{
		for (i2=0;i2<10;i2++)
		{
			for (i3=0;i3<5;i3++)
			{
				a[i1][i2][i3] = 0;
			}
		}
	}

	for (i1=0;i1<3;i1++)
	{
		for (i2=0;i2<10;i2++)
		{
			for (i3=0;i3<5;i3++)
			{
				printf("a[%d][%d][%d] = %d\n",i1,i2,i3,a[i1][i2][i3]);
			}
		}
	}
}
