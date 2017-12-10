//9x9乘法表右下三角形
#include<stdio.h>
int main()
{int i,j,n;
for(i=1;i<=9;i++)
{for(n=1;n<=9-i;n++)//控制输出空格
    printf("\t");
for(j=1;j<=i;j++)//控制输出i*j
 printf("%d*%d=%-4d",i,j,i*j);
	printf("\n");
}
printf("\n");
	return 0;
}