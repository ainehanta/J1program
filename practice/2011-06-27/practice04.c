#include <stdio.h>
main(void)
{
  printf("2011-06-27-04\n");
  int y=0,a=0,b=0;
  printf("西暦を入力してください。"); scanf("%d",&y);

  y = y - 1930;
  a = y / 4;
  b = y % 4;
  a = a + 1;

  if(b == 0)
  {
    if(a <= 3)
      if(a >= 0)
      {
	printf("ワールドカップ開催年です。\n");
      }
    if(a <= 6)
      if(a >= 4)
      {
	printf("ワールドカップ開催年ではありません。\n");
      }
    if(a >= 7)
    {
      printf("ワールドカップ開催年です。\n");
    }
  }
  else
  {
    printf("ワールドカップ開催年ではありません。\n");
  }
}
