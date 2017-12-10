//求2/1+3/2+5/3+8/5+...前十项之和，保留两位小数（后一项分子是前一项分子与分母之和，后一项分母是前一项分子）
#include<stdio.h>
int main()
{
	float a=2,b=1,s=0;
int d,i;
	for(i=1;i<=10;i++)
	{s=s+a/b;
	d=a;
	a=a+b;
	b=d;
	}
	printf("%7.2f\n",s);
	return 0;
}