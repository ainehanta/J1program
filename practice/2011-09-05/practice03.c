#include <stdio.h>
main (void)
{
  int i;
  int a;

  i=1;
  a=8;
  while (i <= a){
    printf("%d\n",i);
    i=i+1;
  }
  printf("***終了時のiの値=%d ***\n",i);
}
