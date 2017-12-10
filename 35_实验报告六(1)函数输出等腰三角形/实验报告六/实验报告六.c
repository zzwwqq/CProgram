//输入一个数x，输出x行星号等腰三角形
#include<stdio.h>//编译预处理指令
int main()                                                                          
{   int a;//注意实参变量名最好不要和形参变量名相同，另外不要取与函数名相同的变量名//注意实参类型与形参类型要一致
	void print(int x);///声明print函数///声明函数的这一语句后可加分号
	scanf_s("%d",&a);//从键盘上输入一个数
	   print(a);//这是一个调用print函数的语句.//实参a的值给了形参x
		return 0;

}
void print(int x)//定义print函数///定义函数的这一语句后不能加分号
{                  //注意在定义函数时的函数体中形参x可以直接参与运算不必用其他变量名代替
	int i,j,n;
	for(i=1;i<=x;i++)//控制行数
		{
			for(j=1;j<=x-i;j++)//控制空格数
		        printf(" ");
			for(n=1;n<=2*i-1;n++)//控制星号数
				printf("*");
			printf("\n");//控制换行
	    }
}