#include <stdio.h>

#define MASU 19
 
main()
{
	int ban[MASU][MASU];
	int te;
	int x,y;
	int i1,i2;
	int e = 0;

	int ch[10] = {'\0'};
	int len;
	
	for (i1=0;i1<MASU;i1++)
	{
		for (i2=0;i2<MASU;i2++)
		{
			ban[i1][i2] = 2;
		}
	}

	te = 1;

	while (te <= MASU*MASU)
	{
		system("clear");

		printf("¸½ºß:%d¼êÌÜ\n",te);

		printf(" ");
		for (i1=0;i1<MASU;i1++)
		{
			printf("%2d",i1);
		}
		printf("\n");


		for (i1=0;i1<MASU;i1++)
		{
			printf("%2d",i1);
			for (i2=0;i2<MASU;i2++)
			{
				switch (ban[i1][i2])
				{
					case 0 : printf("¡ü"); break;
					case 1 : printf("¡û"); break;
					case 2 : printf("¡¦"); break;
				}
			}
			printf("\n");
		}

		if (te%2==1)
		{
			printf("Çò:");
		}
		else
		{
			printf("¹õ:");
		}

		scanf("%s",ch);

		len = 0;
		x = 0;
		y = 0;

		while(ch[len]=='\0')
		{
			if(ch[len] == 'E' || ch[len] == 'e')
			{
				e = 10;
				break;
			}
			switch(len)
			{
				case 0 : x = ch[len] * 10;
				

		if (x < MASU || x >= 0 || y < MASU || y >= 0)
		{
			if (ban[x][y] < 2 != 1)
			{
				if (te%2 == 1)
				{
					ban[x][y] = 1;
				}
				else
				{
					ban[x][y] = 0;
				}
				te++;
			}
		}
	}
}
