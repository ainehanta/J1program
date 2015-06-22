#include<stdio.h>
main(void)
{
	printf("2011-06-13-05-OR\n");
	int a,b,o;
	printf("Aに入力する値を入力してください。（0・1）"); scanf("%d",&a);
	printf("Bに入力する値を入力してください。（0・1）"); scanf("%d",&b);

	if (a<=1)
	  if (a>=0)
	    if (b<=1)
	      if (b>=0)
	      {
		if (a==1)
		  o=1;
		if (b==1)
		  o=1;
		printf("出力は%dです。\n",o);
	      }
	      else
	      {
		printf ("0か1で入力してください。\n");
	      }
}
		
