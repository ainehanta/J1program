#include <stdio.h>
main(void)
{
  printf("2011-06-27-02\n");
  int y=0,a=0,b=0;
  printf("��������Ϥ��Ƥ���������"); scanf("%d",&y);

  y = y - 1896;
  a = y / 4;
  b = y % 4;
  a = a + 1;

  if(b == 0)
  {
    printf("��%d�󥪥��ԥå�����ǯ�Ǥ���\n",a);
  }
  else
  {
    printf("�����ԥå�����ǯ�ǤϤ���ޤ���\n");
  }
}
