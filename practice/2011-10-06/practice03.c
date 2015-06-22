#include<stdio.h>
main(void)
{
  int n=3;
  int tate;
  int yoko;
  int x,y;

  printf("縦の行数を入力してください。");  scanf("%d",&x);
  printf("横の行数を入力してください。");  scanf("%d",&y);
  tate=1;
  while(tate <= x)
  {
    yoko=1;
    while(yoko <= y)
    {
      printf("*");
      yoko++;
    }

    printf("\n");
    tate++;
  }
}
