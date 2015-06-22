#include<stdio.h>
main(void)
{
  int tate;
  int yoko;
  int n;

  printf("行数を入力してください。");  scanf("%d",&n);
  if(n>=0)
  {
    printf("１以上の数を入力してください。\n");
  }
  else
  {
    tate=1;
    while(tate <= n)
    {
      yoko=1;
      while(yoko <= tate)
      {
        printf("*");
        yoko++;
      }

      printf("\n");
      tate++;
    }
  }
}
