#include <stdio.h>
main (void)
{
  int i;
  int a;

  printf("��������\n");
  scanf("%d",&a);

  i=1;
  while (i <= a){
    printf("%d\n",i);
    i=i+1;
  }
  printf("***��λ����i����=%d ***\n",i);
}
