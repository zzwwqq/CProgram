//从键盘输入十个学生成绩，输出平均成绩以及高于平均成绩的学生人数
#include<stdio.h>
int main()
{   float averge;//averge
	float score[10];//score数组用于存放十个学生成绩，10代表该数组含有10个元素
	float sum=0;
	int i;
	int n=0;//n为成绩高于平均值的学生人数
	for(i=0;i<10;i++)//输入10个学生的分数
		{
			scanf("%f",&score[i]);
			sum=sum+score[i];//十个学生成绩之和
	     }
	averge=sum/10;//求十个人成绩的平均值
	printf("%f",averge);
	printf("\n");
	for(i=0;i<10;i++)
	{
		if(score[i]>averge)
			n=n+1;//统计高于平均成绩的学生人数
	}
	printf("%d",n);
	return 0;
}
	