//用指向指针的指针的方法，对五个字符串冒泡法排序并输出

#include<stdio.h>
#include<string.h>
#define len 20       

int main()
{
	void sort(char **p);
	int i;
	char **p,*pstr[5],str[5][len];
	for(i=0;i<5;i++){
	
		pstr[i]=str[i];
	}
	printf("input 5 strings:\n");
	for(i=0;i<5;i++){
	
		scanf("%s",pstr[i]);
	}
	p=pstr;
	sort(p);
	printf("\nstring sorted:\n");
	for(i=0;i<5;i++){
	
		printf("%s\n",pstr[i]);
	}
     printf("\n");
	return 0;
}

//冒泡法排序
void sort(char **p){
    char *temp;
	int i,j;
	for(i=0;i<4;i++){
	
		for(j=0;j<4-i;j++){
		
			if(strcmp(*(p+j),*(p+j+1))>0){
			    temp = *(p+j);
				*(p+j) = *(p+j+1);
				 *(p+j+1)=temp;
			}
		}
	}
}