//星号平行四边形
#include<stdio.h>
int main()
{
	int i,j,n;
	for(i=1;i<=5;i++)//控制行
	{   for(j=1;j<i;j++)//控制空格数
	       printf(" ");
	    for(n=1;n<=18;n++)//控制星号数
			printf("*");
		printf("\n");//控制换行
	}
	return 0;
}