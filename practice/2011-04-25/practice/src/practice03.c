#include<stdio.h>
main(void)
{
  int a,b;

  printf("手順の練習-3\n");

  printf("一つの値を入力してください。\n");
  printf("Aの値 : ");  scanf("%d",&a);

  /*a=1;*/
  a=a+a;
  b=a+a;
  
  if(a != 0)
  {
  printf("Aの値は%d\n",a);
  printf("Aを四倍した値は%d\n",b);
  }else{
    printf("0を四倍した値は0です。\n");
  }

}
