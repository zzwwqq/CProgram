//求2+4+6+...
#include<stdio.h>  //先判断后执行
int main()
{int i,sum;
for(i=1,sum=0;i<=50;i++)
	sum=sum+2*i;
printf("sum=%d",sum);
return 0;
}

