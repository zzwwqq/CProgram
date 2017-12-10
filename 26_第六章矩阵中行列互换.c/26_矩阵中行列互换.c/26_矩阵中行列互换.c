//矩阵中行列互换
#include<stdio.h>
int main()
{
	int a[2][3]={{1,2,3},{4,5,6}};
    int b[3][2],i,j;
printf("array a:\n");//array为数组阵列
for(i=0;i<=1;i++)//处理a数组中某一行元素
{	for(j=0;j<=2;j++)//处理a数组中某一列元素
	{
		printf("%5d",a[i][j]);//输出a数组各元素
		b[j][i]=a[i][j];//将a数组的值赋给b数组相应元素
}

printf("\n");
}
printf("array b:\n");//输出b数组各个元素
for(j=0;j<=2;j++)
{    for(i=0;i<=1;i++)
      printf("%5d",b[j][i]);//for循环只能控制一个语句，当列循环结束时，跳出列循环
      printf("\n");//内循环结束时，执行。如果下面的花括号在这一句前面，那么这一句在外循环结束时执行
}
return 0;
}

