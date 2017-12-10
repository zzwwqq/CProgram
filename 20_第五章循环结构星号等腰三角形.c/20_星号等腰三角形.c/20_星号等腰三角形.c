//ÐÇºÅµÈÑüÈý½ÇÐÎ
#include<stdio.h>
void main()
{int i,j,n;
for(i=1;i<=4;i++)
{for(j=1;j<=4-i;j++)
	  printf(" ");
  for(n=1;n<=2*i-1;n++)
      printf("*"); 
  printf("\n");
}
}

