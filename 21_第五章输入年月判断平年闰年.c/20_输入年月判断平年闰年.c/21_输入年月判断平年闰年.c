//任意输入年月判断是平年还是闰年，和这个月多少天。
#include<stdio.h>
int main()
{int year,month,days=0,leap;
printf("请输入年，月：");
scanf("%d,%d",&year,&month);
if(year%4==0&&year%100!=0||year%400==0)leap=1;
else leap=0;
printf("%d年%d月有:",year,month);
switch(month)
{case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:days=31;break;
case 4:
case 6:
case 9:
case 11:days=30;break;
case 2:if(leap)days=29;else days=28;
}
printf("%d天\n",days);
if(leap==1)
printf("这一年为闰年\n");
else printf("这一年为平年\n");
return 0;
}