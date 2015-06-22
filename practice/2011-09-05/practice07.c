#incluide <stdio.h>

main (void)
{
  int i,a,b;

  i=1;
  a=3;
  b=0;
  c=2;

  while (i <= a)
  {
    while (b <= i)
    {
      c=c*2;
      b=b++;
    }
    printf("%d\n",c);
    i=i++;
  }
}
