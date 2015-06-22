#include <stdio.h>
main (void)
{
  int i;

  i=2;
  while (i <= 10){
    printf("%d\n",i);
    i=i+2;
  }
  printf("***終了時のiの値=%d ***\n",i);
}
