//口袋中有红 黄 蓝 白 黑 五种颜色的球若干个。每次从口袋中先后取出3个球，问得到三种不同颜色的球的可能取法，输出每种排列的情况。


#include<stdio.h>
int main()
{
	enum Color
	{
		red,
		yellow,
		blue,
		white,
		black
	};
	enum Color i,j,k,pri;
	int n,loop;
	n=0;
	for(i = red;i<=black;i++)
		for(j = red;j<=black;j++)
			if(i!=j)
			{
				for(k = red;k<=black;k++)
					if(k!=i && k!=j)
					{
						n=n+1;
						printf("第%-2d种情况：  ",n);
			            for(loop=1;loop<=3;loop++)
						{
							switch(loop)
							{
								case 1: pri=i;break;
								case 2: pri=j;break;
								case 3: pri=k;break;
								default :break;
							}
							switch(pri)
							{
							   case red: printf("%-15s","red");break;
							   case yellow: printf("%-15s","yellow");break;
						       case blue: printf("%-15s","blue");break;
							   case white: printf("%-15s","white");break;
							   case black: printf("%-15s","black");break;
							   default :break;
							}
						}
						printf("\n");
					}
			}
			printf("\n总共有：%d种情况\n",n);

	return 0;
}