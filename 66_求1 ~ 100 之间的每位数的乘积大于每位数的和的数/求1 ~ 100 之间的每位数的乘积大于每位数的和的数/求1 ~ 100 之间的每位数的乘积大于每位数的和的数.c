//求1 ~ 100 之间的每位数的乘积大于每位数的和的数

#include<stdio.h>
int main()
{
	int n,k=1,s=0,m;
	for(n=1;n<=100;n++){
	
		k=1;s=0;
		m=n;
		while(m>=1){
		
			k*=m%10;  
			s+=m%10;
			m=m/10;
		}
		if(k>s){printf("%d\n",n);}
	}
	return 0;
}



