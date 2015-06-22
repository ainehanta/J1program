#include<stdio.h>
main()
{
	int board[9][9];
	int x,y;
	int tesuu;

	tesuu = 0;

	for(y=0;y<9;y++)
	{
		for(x=0;x<9;x++)
		{
			board[y][x] = 2;
		}
	}

	for(y=0;y<9;y++)
	{
		for(x=0;x<9;x++)
		{
			if(board[y][x] == 0)
			{
				printf("¡ü");
			}
			if(board[y][x] == 1)
			{
				printf("¢ş");
			}
			if(board[y][x] == 2)
			{
				printf("¡¦");
			}
		}
		printf("\n");
	}

	if(tesuu%2 == 1)
	{
		board[y][x] = 0;
	}
	else
	{
		board[y][x] = 1;
	}

}
