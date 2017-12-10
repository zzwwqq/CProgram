//3x3整形矩阵对角线元素之和

#include<stdio.h>
#include<string.h>
#define len 20       

int main()
{

	int a[3][3],sum=0;
	int i,j;
	printf("enter data:\n");
	for(i=0;i<3;i++){
	
		for(j=0;j<3;j++){
		
			scanf("%3d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++){
	
		sum=sum+a[i][i];
	}
	printf("sum = %6d\n",sum);
	return 0;
}