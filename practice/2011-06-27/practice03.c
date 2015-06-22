/*J11406 鵜重　誠*/

#include <stdio.h>

int nk (int y)
{
  printf("第%d回オリンピックの開催年でしたが、実際には行われませんでした。\n",y);
}
main(void)
{
  printf("2011-06-27-03\n");
  int y=0,a=0,b=0;
  printf("西暦を入力してください。"); scanf("%d",&y);

  y = y - 1896;
  a = y / 4;
  b = y % 4;
  a = a + 1;

  if(b == 0)
  {
    if(a == 6)
    {
      nk(a);
    }
    else if(a == 12)
    {
      nk(a);
    }
    else if(a == 13)
    {
      nk(a);
    }
    else
    {
    printf("第%d回オリンピック開催年です。\n",a);
    }
  }
  else
  {
    printf("オリンピック開催年ではありません。\n");
  }
}
