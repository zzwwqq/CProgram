//用字符数组输出菱形
#include<stdio.h>
int main()
{   int i,j;
	char diamond[5][5]={{' ',' ','*',' ',' '},{' ','*',' ','*',' '},{'*',' ',' ',' ','*'},{' ','*',' ','*',' '},{' ',' ','*',' ',' '}};
	for(i=0;i<=4;i++)//控制行
	{ for(j=0;j<=4;j++)//控制列
			 printf("%c",diamond[i][j]);
           	printf("\n");
}
	return 0;
}
