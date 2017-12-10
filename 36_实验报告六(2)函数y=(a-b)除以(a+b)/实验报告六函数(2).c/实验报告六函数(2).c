#include<stdio.h>
int main()
{     int c;
	int a,b;
	printf("请输入两个数：");
	scanf_s("%d%d",&a,&b);
	int print(int x,int y);//声明abcd函数
	c=print(a,b);
	printf("%d",c);
		return 0;
}
int print(int x,int y)
{   
	int z;
	z=(x-y)/(x+y);
	return z;
}