//9x9乘法表左上三角形
#include<stdio.h>
int main()
{int i,j;
for(i=1;i<=9;i++)
{ for(j=1;j<=10-i;j++)//总行数减当前行数再加以
		printf("%d*%d=%-3d",i,j,i*j);
printf("\n");
}	return 0;
}