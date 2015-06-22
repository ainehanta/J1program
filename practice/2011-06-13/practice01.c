#include<stdio.h>
main(void)
{
	printf("2011-06-13-01\n");
	int t;
	printf("時間を入力してください。（0～23）");		scanf("%d",&t);

	if (t>=0)
		if(t<=23)
			{

				if (t<12)
				{
					printf("午前%d時\n",t);
				}

				if (t>=12)
				{
					printf("午後%d時\n",t-12);
				}
			}
	printf("0～23の範囲で入力してください。\n");
}
