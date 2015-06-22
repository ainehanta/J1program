#include<stdio.h>
main(void)
{
  int a,b,c,d;

  printf("手順の練習-6\n");

  /*a=1;
  b=2;
  c=3;*/
  d=0;

  printf("三つの値を入力してください。\n");
  printf("Aの値 : "); scanf("%d",&a);
  printf("Bの値 : "); scanf("%d",&b);
  printf("Cの値 : "); scanf("%d",&c);

  printf("Aの古い値は%d\n",a);
  printf("Bの古い値は%d\n",b);
  printf("Cの古い値は%d\n",c); 

  d=a;
  a=c;
  c=b;
  b=d;

  printf("Aの入れ替えた値は%d\n",a);
  printf("Bの入れ替えた値は%d\n",b);
  printf("Cの入れ替えた値は%d\n",c);
}
