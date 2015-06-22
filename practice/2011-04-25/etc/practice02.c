#include<stdio.h>
main(void)
{
  int a;
  int b;
  int c;

  a=1;
  b=3;

  if(a<b){
    c=a;
  }else if(a>b){
    c=b;
  }else{
    c=-1;
  }

  printf("a=%d\n",a);
  printf("b=%d\n",b);
  printf("---> c=%d\n",c);
}
