#include<stdio.h>
main(void)
{
	printf("2011-06-13-04\n");
	int t;
	printf("時間を入力してください。（0～23）");  scanf("%d",&t);

	if (t>=0)
		if(t<=23)
			{
				if (t>=0)
					if (t<=4)
						{
							printf("夜です。\n");
						}
				if (t>=5)
					if (t<=10)
						{
							printf("朝です。\n");
						}
				if (t>=11)
					if (t<=15)
						{
							printf("昼です。\n");
						}
				if (t>=16)
					if (t<=18)
						{
							printf("夕です。\n");
						}
				if (t>=19)
					{
						printf("夜です。\n");
					}
			}
			else
			{
				printf("0から23の範囲で入力してください。\n");
			}
}
