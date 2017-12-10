//水仙花数是指一个三位数，其各位数立方和等于该数本身。
#include<stdio.h>
int main()
{int a,b,c,i,k=0;//K为100—10000内水仙花个数
for(i=100;i<1000;i++)
{a=i/100;b=i%100/10;c=i%10;
if(a*a*a+b*b*b+c*c*c==i)
{printf("%5d",i);k++;}
}printf("\nk=%d\n",k);
return 0;
}

