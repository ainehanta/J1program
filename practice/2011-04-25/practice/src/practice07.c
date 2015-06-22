#include<stdio.h>
main(void)
{
	int a,b,c;

	printf("手順の練習-7\n");
	
	/*a=-1;
	  b=4;*/

  printf("二つの値を入力してください。\n");
  printf("Aの値 : ");  scanf("%d",&a);
  printf("Bの値 : ");  scanf("%d",&b);

	printf("Aの値は%d\n",a);
	printf("Bの値は%d\n",b);
	
	if (a<0){
		a*-1;
		}
	if (b<0){
		b*-1;
		}
	if (a<b){
		c=b;
		}else if (b<a){
			c=a;
			}else{
                        c=a;
                        }

	printf("Aの絶対値は%d\n",a);
	printf("Bの絶対値は%d\n",b);
	printf("絶対値が大きい方の絶対値または\n絶対値が同じ時の絶対値は%d\n",c);
}
