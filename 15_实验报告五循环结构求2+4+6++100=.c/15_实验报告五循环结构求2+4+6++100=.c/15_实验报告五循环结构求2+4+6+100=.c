#include<stdio.h>   //先执行，后判断
int main()
{int i,sum;
for(i=2,sum=0;i<=50;)
{i=i+2;     //先i=i+2,再s=s+i,再判断i<=50;
sum=sum+i;
}
printf("sum=%d",sum);
return 0;
}

