#include<stdio.h>
main(void)
{
  int n=3;
  int tate;
  int yoko;
  int x,y;

  printf("�ĤιԿ������Ϥ��Ƥ���������");  scanf("%d",&x);
  printf("���ιԿ������Ϥ��Ƥ���������");  scanf("%d",&y);
  tate=1;
  while(tate <= x)
  {
    yoko=1;
    while(yoko <= y)
    {
      printf("*");
      yoko++;
    }

    printf("\n");
    tate++;
  }
}
