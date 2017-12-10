#include<stdio.h>
int main()
{
	float max(float x,float y);//对max函数的声明
	float a,b,c;//定义变量
	printf("please input two floatger number:\n");//提示用户输入数据
	scanf("%f,%f",&a,&b);                        //输入两个数
	c=max(a,b);                     //调用max函数
	printf("max is %f\n",c);
	return 0;
}
float max(float x,float y)
{float z;
z=x>y? x:y;
return z;
}



