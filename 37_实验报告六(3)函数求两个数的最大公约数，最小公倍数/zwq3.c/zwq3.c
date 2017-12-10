//输入两个正整数，调用函数求出最大公约数，和最小公倍数。
#include<stdio.h>//编译预处理指令
int main()//主函数
{            //函数体开始
	int m,n,a,b;//定义变量
	int zdgys(int,int);//声明最大公约数（zdgys）函数
    int zxgbs(int,int);//声明最小公倍数（zxgbs）函数
	printf("请输入两个正整数：\n");
	scanf_s("%d,%d",&m,&n);//从键盘输入两个数
	a=zdgys(m,n);//调用zdgys函数
	b=zxgbs(m,n);//调用zxgbs函数
	printf("最大公约数为：%d\n",a);
	printf("最小公倍数为：%d\n",b);
	return 0;
}             //主函数结束
int zdgys(int x,int y)//定义最大公约数（zdgys）函数
{  
	int r;
    r=x%y;
while(r!=0)
  {   x=y;
      y=r;
      r=x%y;
  }
return y;
}
int zxgbs(int u,int v)//定义最小公倍数（zxgbs）函数
{
	return u*v/zdgys(u,v);
}