//Çó1- 1/2 + 1/3 - 1/4 + 1/5 .....+ 1/99 - 1/100 =?
#include<stdio.h>
int main()
{
	double s=1,i=1,j=2;
	for(;j<=100;j++)
		{
			i=-i;
	        s=s+i/j;
	    }
	        printf("%f\n",s);	
	return 0;
}