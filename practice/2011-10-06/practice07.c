#include<stdio.h>
main(void)
{
  int n=5,tate,yoko;
  tate=1;
  while(tate<=n)
  {
    yoko=1;
    while(yoko<=n)
    {
      if(tate==yoko)
        {
          printf("+");
        }
        else
        {
          printf("*");
        }
        yoko++;
    }
    printf("\n");
    tate++;
  }
}
