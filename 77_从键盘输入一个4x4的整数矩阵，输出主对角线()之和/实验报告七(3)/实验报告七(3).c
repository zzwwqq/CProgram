//从键盘输入一个4x4的整数矩阵，输出主对角线(\)之和
#include<stdio.h>
int main()
{
	int i,j,s=0;
	int a[4][4];
	printf("请输入16个整数：\n");
	for(i=0;i<4;i++)//i控制行
		{
			for(j=0;j<4;j++)//j控制列
			scanf("%d",&a[i][j]);//从键盘输入得到a[0][0]----a[3][3]的值
        }
	printf("array a：\n");
	    for(i=0;i<4;i++)//i控制行
		{for(j=0;j<4;j++)//j控制列
		     printf("%5d",a[i][j]);//输出
		printf("\n");
		}
		s=a[0][0]+a[1][1]+a[2][2]+a[3][3];//求主对角线元素的和
		printf("%d",s);
		printf("\n");
}