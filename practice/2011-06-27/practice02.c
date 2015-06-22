#include <stdio.h>
main(void)
{
  printf("2011-06-27-02\n");
  int y=0,a=0,b=0;
  printf("西暦を入力してください。"); scanf("%d",&y);

  y = y - 1896;
  a = y / 4;
  b = y % 4;
  a = a + 1;

  if(b == 0)
  {
    printf("第%d回オリンピック開催年です。\n",a);
  }
  else
  {
    printf("オリンピック開催年ではありません。\n");
  }
}
