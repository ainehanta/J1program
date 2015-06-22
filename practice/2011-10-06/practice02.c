#include<stdio.h>
main(void)
{
  int n=3;
  int tate=1;

  while(tate <= n)
  {
    int yoko=1;
    while(yoko <= n)
    {
      printf("*");
      yoko++;
    }

    printf("\n");
    tate++;
  }
}
