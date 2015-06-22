#include<stdio.h>
main(void)
{
	int a,b,c;

	/*a=4;
	  b=1;*/

	printf("手順の練習-8\n");

  printf("二つの値を入力してください。\n");
  printf("Aの値 : ");  scanf("%d",&a);
  printf("Bの値 : ");  scanf("%d",&b);

	printf("Aの値は%d\n",a);
	printf("Bの値は%d\n",b);

	if (a>b){
		c=a;
		a=b;
		b=c;
		}

	printf("もしA>BならばAとBが交換された値になり、\nそれ以外ならそのままのAとBの値になる。\n");
	printf("Aの値は%d\n",a);
	printf("Bの値は%d\n",b);
}
