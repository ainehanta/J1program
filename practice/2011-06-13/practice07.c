#include<stdio.h>
main(void)
{
	printf("2011-06-13-07-NOT\n");
	int a,o;
	printf("Aに入力する値を入力してください。（0・1）"); scanf("%d",&a);

	if (a<=1)
	  if (a>=0)
	  {
	    if (a==0)
	      o=1;
	    if (a==1)
	      o=0;
	    printf("出力は%dです。\n",o);
	  }
	  else
	  {
	    printf ("0か1で入力してください。\n");
	  }
}
		
