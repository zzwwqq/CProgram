//输入10个数，要求输出其中最大的元素和该数是第几个数
#include<stdio.h>
int main()
	{
		int max(int x,int y);//声明max函数
	    int a[10],m,n,i;
	    printf("enter 10 integer numbers:");
		for(i=0;i<10;i++)//输入10个数给a[0]---a[9]
		   scanf("%d",&a[i]);
		   printf("\n");
		for(i=1,m=a[0],n=0;i<10;i++)
		{
			if(max(m,a[i])>m)//如果max函数返回值大于m
			{m=max(m,a[i]);//max函数返回值取代m原值
				n=i;
		    }
        }
		printf("the largest number is %d\nit is the %dth number.\n ",m,n+1);
}
int max(int x,int y)//定义max函数
{
	return (x>y? x:y);//返回x和y中的最大者
}

		
	