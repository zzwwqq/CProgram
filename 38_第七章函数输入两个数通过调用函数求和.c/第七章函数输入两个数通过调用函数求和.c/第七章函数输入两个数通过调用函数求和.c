 //调用函数求两数之和
#include<stdio.h>
int main()
{  
	float add(float x,float y);//声明add函数
	float a,b,c;
	printf("please enter a and b:");
	scanf("%f,%f",&a,&b);
	c=add(a,b); //调用add函数
	printf("sum is %f\n",c);
	return 0;
}
float add(float x,float y)//定义add函数
{
	float z;
	z=x+y;
	return (z);
}