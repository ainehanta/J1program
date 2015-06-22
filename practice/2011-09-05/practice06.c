#include <stdio.h>
main (void)
{
  int i;
  int a;

  printf("数を入力\n");
  scanf("%d",&a);

  i=1;
  while (i <= a){
    printf("%d\n",i);
    i=i+1;
  }
  printf("***終了時のiの値=%d ***\n",i);
}
