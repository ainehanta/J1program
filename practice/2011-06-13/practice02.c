#include<stdio.h>
main(void)
{
	printf("2011-06-13-2\n");
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
						c=5;
					}
				if (b==2)
					{
						c=5;
					}
				else if (b==9)
					{
						c=5;
					}
				else
					{
						printf("通常価格です。\n");
					}
				if (c>0)
					{
						printf("%d％引きです。\n",c);
					}
			}
			else
			{
			printf("1～31の範囲で入力してください。\n");
			}
}
