#include <stdio.h>
main()
{
	int i1,i2;
	int a[5][5] = {{1,0,0,0,1},{0,1,0,1,0},{0,0,1,0,0},{0,1,0,1,0},{1,0,0,0,1}};

	for (i1=0;i1<5;i1++)
	{
		for (i2=0;i2<5;i2++)
		{
			switch(a[i1][i2])
			{
				case 0 : printf(" "); break;
				case 1 : printf("*"); break;
			}
		}
		printf("\n");
	}
}
