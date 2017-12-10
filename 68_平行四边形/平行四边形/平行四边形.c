//平行四边形

#include<stdio.h>
#define len 20        

int main()
{
  int i=0,j=0;
  for(i=0;i<=4;i++){
	   printf("\n");
	    printf("              ");
	  for(j=0;j<i;j++){
	      printf("  ");
	  }
	  for(j=0;j<5;j++){
	     printf("*  ");
	  }
	   printf("\n");
  }
   printf("\n");
	return 0;
}