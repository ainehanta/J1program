#include<stdio.h>
main(void)
{
	printf("2011-06-13-3\n");
	int a,b,c,d;
	c=0;
	printf("日にちを入力してください。（1～31）");  scanf("%d",&d);

	if (d>=1)
		if(d<=31)
			{
				a=d/10;
				b=d%10;
				if (a==2)
					{
						c=c+5;
					}
				if (b==2)
					{
						c=c+5;
					}
				if (b==9)
					{
						c=c+5;
					}
				if (c>0)
					{
						printf("%d％引きです。\n",c);
					}
				else
				{
					printf("通常価格です。\n");
				}
			}
			else
			{
			printf("1～31の範囲で入力してください。\n");
			}
}
