//编写一个函数double fun(double x),其功能是对正数x的值保留两位小数，并对第三位进行四舍五入
#include<stdio.h>
#include<stdlib.h>
double fun(double x){
	int three,four;
	double m=0;
		if(x < 0.0|| x == 0.0){
	    printf("数据错误,必须为正数且为双精度型数！\n");
		exit(0);
	} 
	if(x > 0.0) {	
		  four = (int)(x*100)%10;
		  three = (int)(x*10)%10;
          if((int)(x*1000)%10>=5){
               four = four+1;
          } 
		  m=((int)x+three*0.1+four*0.01);
	}		  
		  return  m;
}	 
int main(){
	double a=0;
	printf("input num (double): ");
	scanf("%lf",&a);
	printf("保留两位小数后结果为%.2lf\n",fun(a));
	return 0;
}

