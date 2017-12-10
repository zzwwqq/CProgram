//输入一组实数求前10个整数的平均值
#include<stdio.h>
int main()
{
    int n=0;
	float aver=0,s=0,i;
	scanf("%f",&i);
	while(1){            //无限循环，控制循环结束的语句在循环体中     
		if(i>0){
		   s=s+i;                   //求正数之和
		   printf("%f ",i);
		   n++;                      //统计正数个数
		} 
		if(n==10){                   //有10个正数时就跳出循环
		   break;
		}
	scanf("%d",&i);
	}
	aver=s/n;//求平均值
	printf("\n前十个正整数得平均值为：%f\n",aver);
	return 0;
}



