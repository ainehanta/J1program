#include <stdio.h>
main(void)
{
  printf("2011-06-27-04\n");
  int y=0,a=0,b=0;
  printf("��������Ϥ��Ƥ���������"); scanf("%d",&y);

  y = y - 1930;
  a = y / 4;
  b = y % 4;
  a = a + 1;

  if(b == 0)
  {
    if(a <= 3)
      if(a >= 0)
      {
	printf("���ɥ��å׳���ǯ�Ǥ���\n");
      }
    if(a <= 6)
      if(a >= 4)
      {
	printf("���ɥ��å׳���ǯ�ǤϤ���ޤ���\n");
      }
    if(a >= 7)
    {
      printf("���ɥ��å׳���ǯ�Ǥ���\n");
    }
  }
  else
  {
    printf("���ɥ��å׳���ǯ�ǤϤ���ޤ���\n");
  }
}
