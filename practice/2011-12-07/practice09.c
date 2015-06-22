#include <stdio.h>

main()
{
	int goukei,heikin,i;
	int ninzuu[12] = {0};

	goukei = 0;

	for (i=0;i<8;i++)
	{
		printf("%d時の来店者数を入力してください : ",i);
		scanf("%d",&ninzuu[i]);
	}

	for (i=0;i<8;i++)
	{
		goukei += ninzuu[i];
	}

	for (i=0;i<8;i++)
	{		
		if(ninzuu[i]>ninzuu[8])
		{
			ninzuu[8] = ninzuu[i];
			ninzuu[9] = i;
		}
	}

	ninzuu[10] = ninzuu[8];

	for (i=0;i<8;i++)
	{
		if(ninzuu[i]<ninzuu[10])
		{
			ninzuu[10] = ninzuu[i];
			ninzuu[11] = i;
		}
	}

	heikin = goukei / i;

	printf("一日の平均は%d人です。\n",heikin);
	printf("最小：%2d時台%2d人\n",ninzuu[9],ninzuu[8]);
	printf("最大：%2d時台%2d人\n",ninzuu[11],ninzuu[10]);

}	
