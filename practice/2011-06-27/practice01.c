#include <stdio.h>
main(void)
{
  printf("2011-06-27-01\n");
  int y=0;
  printf("��������Ϥ��Ƥ���������"); scanf("%d",&y);
.
  y = y % 4;

  if(y == 0)
  {
    printf("�����ԥå�����ǯ�Ǥ���\n");
  }
  else
  {
    printf("�����ԥå�����ǯ�ǤϤ���ޤ���\n");
  }
}
