#include <stdio.h>
main (void)
{
  printf("2011-06-27-05\n");
  int m=0,a=0,b=0;

  printf("月を入力してください。"); scanf("%d",&m);

  a = m;
  m = m % 2;

  if(a >= 1)
    if(a <= 7)
      if(m >= 1)
	b = 1;
      
  if(a >= 8)
    if(a <= 12)
      if(m == 0)
	b = 1;

  if(b == 1)
    printf("大の月です。\n");
  else
    printf("小の月です。\n");
}
