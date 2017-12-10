//编写int fac(int x)计算x!,在主函数中输入n,m的值通过调用fac函数计算c(m,n)
#include<stdio.h>
int main()
{
	int fac(int x);//函数声明
	int m,n,a,b;
	scanf("%d%d",&n,&m);
	a=n-m;
	b=fac(n)/(fac(m)*fac(a));//c(m,n)=n!/((m!)*(n-m)!)
	printf("结果为%d",b);
	printf("\n");
	return 0;
}
int fac(int x)
{
	int s=1,i;
	for(i=x;i>=1;i--)
		s=s*i;
	return s;
}

