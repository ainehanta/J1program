#include<stdio.h>
main(void)
{
  int tate;
  int yoko;
  int n;

  printf("�Կ������Ϥ��Ƥ���������");  scanf("%d",&n);
  if(n>=0)
  {
    printf("���ʾ�ο������Ϥ��Ƥ���������\n");
  }
  else
  {
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
}
