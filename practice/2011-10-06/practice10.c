#include<stdio.h>
main(void)
{
  int n=15;
  int tate;
  int yoko;

  yoko=1;

  printf("   |");
  while(yoko<=n)
  {
    printf("%3x",yoko);
    yoko++;
  }
  printf("\n");

  yoko=0;

  printf("_");
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
    printf("%3x|",tate);
    while(yoko <= n)
    {
      printf("%3x",tate*yoko);
      yoko++;
    }

    printf("\n");
    tate++;
  }
}
