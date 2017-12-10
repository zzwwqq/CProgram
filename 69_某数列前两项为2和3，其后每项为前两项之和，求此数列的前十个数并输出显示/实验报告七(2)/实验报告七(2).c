//某数列前两项为2和3，其后每项为前两项之和，求此数列的前十个数并输出显示
#include<stdio.h>
int main()
{      int i;
	int a[10]={2,3};//对第一个和第二个数赋初值
	for(i=2;i<10;i++)
		a[i]=a[i-1]+a[i-2];//求第2至第10个数
	printf("这十个数为\n");
	for(i=0;i<10;i++)
		{
			printf("%d",a[i]);
	         printf(" ");
	}
	printf("\n");

}

