#include<stdio.h>
main(void)
{
  int n=5,tate,yoko;
  tate=1;
  while(tate<=n)
  {
    if (tate%2 != 0)
    {
        yoko=1;
        while(yoko<=n)
        {
          if(yoko%2 != 0)
        {
          printf("+");
        }
        else
        {
          printf("*");
        }
        yoko++;
	}
    }
    else
    {
        yoko=1;
        while(yoko<=n)
        {
          if(yoko%2 != 0)
        {
          printf("*");
        }
        else
        {
          printf("+");
        }
        yoko++;
	}
    }
    printf("\n");
    tate++;
  }
}
