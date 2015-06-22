#include<stdio.h>
main (void)
{
  int a=0,s=0,i=0;

  while(a >= 0)
  {
    printf("整数を入力してください。"); scanf("%d",&a);

    if (a >= 0)
    {
      s=s+a;
      i++;
    }
    else
    {
      a=-1;
    }
  }

  printf("合計＝%d　平均＝%d\n",s,s/i);
}
