#include<stdio.h>
main(void)
{
  int tate;
  int yoko;
  int n;

  printf("�Կ������Ϥ��Ƥ���������");  scanf("%d",&n);
  tate=1;
  while(tate <= n)
  {
    yoko=1;
    while(yoko <= tate)
    {
      printf("*");
      yoko++;
    }

    printf("\n");
    tate++;
  }
}
