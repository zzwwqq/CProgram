//编写递归函数，计算 f(x) = 1 + 1/2 + 1/3 + 1/4 +....+ 1 /x-1 + 1/x
#include<stdio.h>
#include<stdlib.h>
int main()
{
	float func(int n);//函数声明
	int x;
	printf("input a interge:");
	scanf("%d",&x);
	printf("%f\n",func(x));
	return 0;
}
float func(int n){
	if(n==1){
	   return 1.0f;
	}
	if(n>1){
	   return (float)(func(n-1)+1.0/n);
	}
	if(n<1){
	   printf("必须输入正整数！\n");
	   exit(0);
	}
}



