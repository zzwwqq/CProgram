//给出一个整数判断几位数，并分别输出每一位数，并逆序输出各位数

#include<stdio.h>
#define len 20        

int main()
{
	int i=0,place=0,ten_thousand,thousand,hundred,ten,indiv;
	 printf("请输入一个数（0~99999）:");
     scanf("%d",&i);
	 if(i>99999||i<0){
		 printf("输入数据错误！");
		 return;
	 } else if(i>9999){
	    place=5;
	 } else if(i>999){
	    place=4;
	 } else if(i>99){
	    place=3;
	 } else if(i>9){
	    place=2;
	 } else {
	    place=1;
	 }
	 printf("位数为：%d\n",place);
	 printf("每位数字为：");
	 ten_thousand = i / 10000;              //如果是五位数，则ten_thousand != 0
	 thousand= (i-10000*ten_thousand)/1000;  //如果是4位数，那么ten_thousand = i / 10000=0，则thousand != 0
     hundred = (i-10000*ten_thousand-1000*thousand)/100;
	 ten = (i-10000*ten_thousand-1000*thousand-hundred*100)/10;
	 indiv =(i-10000*ten_thousand-1000*thousand-hundred*100-ten*10)/1; 
switch(place){
    case 5:
	printf("%d,%d,%d,%d,%d\n",ten_thousand,thousand,hundred,ten,indiv);
	printf("反序数字为：%d%d%d%d%d\n",indiv,ten,hundred,thousand,ten_thousand);
	break;
	case 4:
	printf("%d,%d,%d,%d,%d\n",thousand,hundred,ten,indiv);
	printf("反序数字为：%d%d%d%d\n",indiv,ten,hundred,thousand);
	break;
	case 3:
	printf("%d,%d,%d\n",hundred,ten,indiv);
	printf("反序数字为：%d%d%d\n",indiv,ten,hundred);
	break;
	case 2:
	printf("%d,%d\n",ten,indiv);
	printf("反序数字为：%d%d\n",indiv,ten);
	break;
	case 1:
	printf("%d\n",indiv);
	printf("反序数字为：%d\n",indiv);
	break;
}
     printf("\n");
	return 0;
}