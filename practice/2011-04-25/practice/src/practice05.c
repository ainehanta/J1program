#include<stdio.h>
main(void)
{
  int a,b,c;

  printf("手順の練習-5\n");

  printf("二つの値を入力してください。\n");
  printf("Aの値 : ");  scanf("%d",&a);
  printf("Bの値 : ");  scanf("%d",&b);

  /* a=1;
     b=2;*/
  c=0;

  printf("Aの古い値は%d\n",a);
  printf("Bの古い値は%d\n",b);

  c=a;
  a=b;
  b=c;

  printf("Aの入れ替えた値は%d\n",a);
  printf("Bの入れ替えた値は%d\n",b);
}
