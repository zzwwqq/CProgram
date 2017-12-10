//调用函数递归法求n!
#include<stdio.h>
int main()
{
	float a=0;
 float y=0;
	 float fac(float x);//声明函数
	printf("请输入一个整数：");
	scanf("%f",&a);
	y=fac(a);           //调用函数
	printf("%f!=%f\n",a,y);
	return 0;
}
 float fac(float x)//定义函数
{
	float m=0;
	if(x<0)
		printf("x<0,数据错误！");
	else if(x==0||x==1)
		m=1;
	else 
		m=x*fac(x-1);
	return (m);
}