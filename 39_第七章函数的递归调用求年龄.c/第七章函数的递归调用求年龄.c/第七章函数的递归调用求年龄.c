//有五个学生坐一起问第五个学生多少岁？
//他比第四个大两岁，第四个比第三个大两岁，
//第三个比第二个大两岁，第二个比第一个大两岁，第一个学生10岁。 
#include<stdio.h>
int main()
{
	int age(int n);
	printf("NO.5,age:%d\n",age(5));
	return 0;
}
int age(int n)
{
	int c;
	if(n==1)
		c=10;
	else
		c=age(n-1)+2;
	return(c);
}