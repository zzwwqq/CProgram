//Çó1£¡+2£¡+...+5£¡
#include<stdio.h>
void main()
{int i;
double s=0,k=1;

for(i=1;i<=13;i++)
{k*=i;
s+=k;
}
printf("%f\n",s);
}