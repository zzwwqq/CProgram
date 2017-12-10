//擂台法求几个数中的最大值
#include<stdio.h>
int main()
{
	int a[3][4]={{1,2,3,4},{9,8,7,6},{-10,10,-5,2}};/*定义数组并赋初值，注意行标列标从零开
	始所以没有a[3][4]这个元素*/
	int i,j,row=0,colum=0,max;
    max=a[0][0];//先认定a[0][0]为最大
for(i=0;i<=2;i++)
    for(j=0;j<=3;j++)
		if(a[i][j]>max)
		{max=a[i][j];//如果某元素大于max就取代max的原值
		row=i;       //记下此元素的行
		colum=j;       //记下此元素的列
		}
		printf("max=%d\nrow=%d\ncolum=%d\n",max,row,colum);
		return 0;
}
