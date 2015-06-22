#include <stdio.h>
main(void)
{
  printf("2011-06-27-01\n");
  int y=0;
  printf("西暦を入力してください。"); scanf("%d",&y);
.
  y = y % 4;

  if(y == 0)
  {
    printf("オリンピック開催年です。\n");
  }
  else
  {
    printf("オリンピック開催年ではありません。\n");
  }
}
