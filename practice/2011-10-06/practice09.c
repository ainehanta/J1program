#include<stdio.h>
main(void)
{
  int n=9;
  int tate;
  int yoko;

  yoko=1;

  printf("   |");
  while(yoko<=n)
  {
    printf("%3d",yoko);
    yoko++;
  }
  printf("\n");

  yoko=0;

  while(yoko<=n)
  {
    printf("___");
    yoko++;
  }
  printf("\n");

  tate=1;

  while(tate <= n)
  {
    yoko=1;
    printf("%3d|",tate);
    while(yoko <= n)
    {
      printf("%3d",tate*yoko);
      yoko++;
    }

    printf("\n");
    tate++;
  }
}
