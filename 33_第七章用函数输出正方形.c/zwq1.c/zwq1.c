//用函数输出正方形
#include<stdio.h>
int main()
{
void print_star();//声明print_star函数
void print_abcd();//声明print_abcd函数
print_star();     //调用print_star函数
print_abcd();     //调用print_abcd函数
print_star();     //调用print_star函数
printf("\n");     //调用的函数内容运行完毕后，将光标移到下一行
return 0;         //结束
}
void print_star()//定义 print_star函数
{
	printf("* * * * * *");//作用是输出一行星号
	printf("\n");         //输出星号后紧接着就输出换行
}
void print_abcd()       
{   int i;
	for(i=1;i<=4;i++)
	{
		printf("*");
	    printf("         *");
		printf("\n");
	}
}
