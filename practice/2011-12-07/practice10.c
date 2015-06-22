#include <stdio.h>
#include "graph.h"

main()
{
	int goukei,ninzuu[8],heikin,i;

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

	heikin = goukei / i;

	printf("一日の平均は%d人です。\n",heikin);

        initGraph();

        for(i=0;i<8;i++)
        {
                fillRectangle(i*10,479,i*10+40,479-ninzuu[i],BLACK);
        }

        waitButtonPress();

        closeGraph();

}	
