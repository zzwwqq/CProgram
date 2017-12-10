//输入一个年月日计算该日是该年的第几天

#include<stdio.h>

int main(){
	int leap(int year);
	int sumdays(int month,int day);

	int year=0,month=0,day=0,sumday=0;
	printf("input data(year,month,day):");
	scanf("%d,%d,%d",&year,&month,&day);
	printf("%d/%d/%d ",year,month,day);
	sumday = sumdays(month,day)+day;

	if(leap(year)&&month>=3){
	    sumday = sumday+1;              //如果为闰年且输入的月份大于等于三月，则二月有29天，而下面函数是按28天算的所以要加一天
	}
	printf("is the %dth day in this year.\n",sumday);
	return 0;
}

//判断平年闰年
int leap(int year){
	if(year % 4 == 0 && year % 100 != 0||year % 400==0){
		return 1;
	} else {
	    return 0;
	}	
}

//计算输入的月份之前的月的总天数
int sumdays(int month,int day){
	int i,sumdays=0;
	int month_day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};//平年12个月天数
	for(i=1;i<month;i++){
        sumdays = sumdays+month_day[i];
	}
   return sumdays;
}