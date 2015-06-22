#include<stdio.h>
main(void)
{
  int a,b;

  printf("手順の練習-4\n");

  printf("一つの値を入力してください。\n");
  printf("Aの値 : ");  scanf("%d",&a);

  /* a=1;*/
  b=0;

  b=a+a;
  b=b+b;
  b=b+a;
  b=b+b;


  if(a != 0)
  {
  printf("Aの値は%d\n",a);
  printf("Aの値を十倍した値Bは%d\n",b);
  }else{
    printf("0を十倍した値は0です。\n");
  }

}
