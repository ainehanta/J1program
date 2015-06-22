#include <stdio.h>
main(void)
{
  printf("2011-06-27-06\n");
  int y=0,a=0,b=0,c=0;

  printf("年を入力してください。"); scanf("%d",&y);

  a = y;
  b = y;
  y = y % 4;
  a = a % 100;
  b = b % 400;

  if(y == 0)
    c = c + 1;

  if(a == 0)
    c = c - 1;

  if(b == 0)
    c = c + 1;

  if(c > 0)
    printf("閏年です。\n");
  else
    printf("閏年ではありません。\n");
}
