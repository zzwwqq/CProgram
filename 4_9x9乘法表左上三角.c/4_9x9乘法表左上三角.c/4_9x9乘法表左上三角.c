//9X9左上三角形1
#include<stdio.h>
int main()
{int i,j;
for(i=1;i<=9;i++)
{
	for(j=1;j<=9;j++)
	{
		if(j>=i)//j>=i即列大于等于行时，输出i*j
            printf("%d*%d=%-3d",i,j,i*j);}
printf("\n");
}
return 0;
}