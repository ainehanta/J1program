/*J11406 ���š���*/

#include <stdio.h>

int nk (int y)
{
  printf("��%d�󥪥��ԥå��γ���ǯ�Ǥ��������ºݤˤϹԤ��ޤ���Ǥ�����\n",y);
}
main(void)
{
  printf("2011-06-27-03\n");
  int y=0,a=0,b=0;
  printf("��������Ϥ��Ƥ���������"); scanf("%d",&y);

  y = y - 1896;
  a = y / 4;
  b = y % 4;
  a = a + 1;

  if(b == 0)
  {
    if(a == 6)
    {
      nk(a);
    }
    else if(a == 12)
    {
      nk(a);
    }
    else if(a == 13)
    {
      nk(a);
    }
    else
    {
    printf("��%d�󥪥��ԥå�����ǯ�Ǥ���\n",a);
    }
  }
  else
  {
    printf("�����ԥå�����ǯ�ǤϤ���ޤ���\n");
  }
}
