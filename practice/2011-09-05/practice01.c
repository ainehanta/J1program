#include <stdio.h>
main (void)
{
  int i;

  i=1;
  while (i <= 5){
    printf("%d\n",i);
    i=i+1;
  }
  printf("***終了時のiの値=%d ***\n",i);
}
