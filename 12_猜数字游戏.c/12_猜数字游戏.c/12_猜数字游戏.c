
//这是一个猜数字游戏的程序.
//目的是在10次内利用循环语句猜出正确答案.
#include<stdio.h>//这是编译预处理指令.
#include<stdlib.h>//设置产生随机数的头文件.
int main()//定义主函数.
{         //函数体开始.
	int select,aim,count,num,n,i,j;//这行是程序的声明部分，定义select,aim,count,num,n,i,j为整型变量.
    //游戏说明.
	printf("=======================================\n");
	printf("          【猜数字游戏】\n");
	printf("   系统将自动生成一个1~1000之间的整数。\n");
	printf("   玩家可以猜10次（包括10次）\n");
	printf("   10次之内猜中则算赢。\n");//说明结束.
    w:printf("=====================================\n");//开启选择菜单.
    printf("1 开始游戏\n");//设置选择项目.
	printf("0 退出游戏\n");
	printf(".......................................\n");
    printf("请选择编号:");
	scanf("%d",&select);//玩家输入选择的项目1或0.
	printf("你选择了 %d\n",select);//显示玩家选择的结果.
	srand(time(0));

	while(select==1)//while循环结构.
	{
	  aim=rand()%1000+1;//生成待猜数.
	  
	  for(count=0;count<=10;count++)//进入for循环结构，count用来计玩家第几次猜数.
	  {
          if(count==10)
	        {
			   n=2;
		       break;
		    }
		  else
		{
	    	printf("第%d次，请输入1~1000之间的数：",count+1);//提示玩家第几次输入数据.
		    scanf("%d",&num);//玩家输入一个猜测的数据（num).
		    if(num>aim)//将猜测的数据与电脑自动产生的数据比较.
		       printf("输入的数大了\n");
	    	if(num<aim)//将猜测的数据与电脑自动产生的数据比较.
	    	  printf("输入的数小了\n");
	    	if(num==aim)//将猜测的数据与实际上传的数据比较.
	       	  {
	        	 printf("你很6，还敢再玩一次吗\n");
		         n=1;
		         break;//玩家猜对之后直接结束循环，将结果赋给n.
	       	  }
		}//else finish.
		
	 }//for循环体(猜数过程)结束.
	 
	  if(n==1)//如果玩家猜对了就输出一个count-1层的等腰三角形.
	  {
        for(i=0;i<count;i++)
			{for(j=0;j<count-i-1;j++)//控制每一行的空格数.
		       printf(" ");//输出空格
	          for(j=0;j<2*i+1;j++)//控制每一行的 * 数.
	     	   printf("*");//输出星号.
	           printf("\n");//输出换行符.
		 }
        }
	  if(n==2)
		  printf("虽然10次都没猜中但是别伤心，你还可以按1继续呦，现在告诉你正确答案为%d!\n",aim);//aim是随机产生的数.
   goto w;//返回菜单
	}//当select=0时跳出while循环体，输出不进行游戏.
	printf("游戏退出！\n");//输入0时不进行游戏.
	printf("\n");
return 0;
}
