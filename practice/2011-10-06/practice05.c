#include<stdio.h>
main(void)
{
  int n;
  int tate;
  int yoko;
  int x=9,y=9;

  tate=1;
  yoko=1;

  while(tate <= y)
  {
    yoko=1;
    while(yoko <= x)
    {
      printf("%3d",tate*yoko);
      yoko++;
    }

    printf("\n");
    tate++;
  }
}
