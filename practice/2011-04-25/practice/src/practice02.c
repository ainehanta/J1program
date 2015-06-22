#include<stdio.h>
main(void)
{
  int a,b;

  printf("手順の練習-2\n");

  printf("一つの値を入力してください。");
  printf("Aの値 : ");  scanf("%d",&a);

  /*a=2;*/
  b=a*2;

  if(a != 0)
  {
  printf("Aの値は%d\n",a);
  printf("Aの値を二倍した値Bは%d\n",b);
  }else{
    printf("0の二倍した値は0です。\n");
  }
}
