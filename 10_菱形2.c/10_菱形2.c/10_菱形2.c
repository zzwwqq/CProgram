//菱形
#include<stdio.h>
#define len 15
int main()
{
	int i,j,n;
	for(i=1;i<=len;i++)//控制菱形上面十行
	{   for(n=1;n<=len-i;n++)
	printf(" ");//控制空格
	    for(j=1;j<=2*i-1;j++)
			printf("*");//控制星号
		printf("\n");
	}
	for(i=len-1;i>=1;i--)//控制菱形下面九行
	{   for(n=len-1;n>=i;n--)
	     printf(" ");//控制空格
	    for(j=1;j<=2*i-1;j++)
			printf("*");//控制星号
		printf("\n");//换行
	}
}