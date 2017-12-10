//10个评委给歌手打分，去掉一个最高分，一个最低分，求平均分

#include<stdio.h>
#include<stdlib.h>

int main(){
    int score[10];
	int i,max,min,temp,sum=0;
	float ave=0.0f;
	for(i=0;i<10;i++){
	    scanf("%d",&score[i]);
		sum=sum + score[i];
	}
	max= score[0];
	min= score[0];
	for(i=1;i<10;i++){
		if(score[i]>max){ max = score[i];}
		if(score[i]<min){min = score[i];}
	}
	ave = (sum - max -min)/8.0;
	printf("去掉一个最高分%d,去掉一个最低分%d\n最终得到平均分%f\n",max,min,ave);
}