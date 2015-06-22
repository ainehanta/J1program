#include<stdio.h>
main(void)
{
	int a,b,c,d;

	/*a=1;
	b=-3;
	c=5;*/
	d=0;

	printf("手順の練習-9\n");

  printf("三つの値を入力してください。\n");
  printf("Aの値 : ");  scanf("%d",&a);
  printf("Bの値 : ");  scanf("%d",&b);
  printf("Cの値 : ");  scanf("%d",&c);

	printf("Aの値は%d\n",a);
	printf("Bの値は%d\n",b);
	printf("Cの値は%d\n",c);

	if (a>0){
		d=d+a;
		}
	if (b>0){
		d=d+b;
		}
	if (c>0){
		d=d+c;
		}

	printf("A,B,Cのうち、値が正のものだけ足した結果は%d\n",d);
}
