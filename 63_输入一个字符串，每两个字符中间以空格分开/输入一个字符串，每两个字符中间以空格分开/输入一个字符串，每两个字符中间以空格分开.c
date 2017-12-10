//输入一个字符串，每两个字符中间以空格分开

#include<stdio.h>
#include<string.h>
#define len 20       

int main()
{  void insert(char str1[],char str2[]);
   char str1[80],str2[80];
   printf("please input  string:");
   scanf("%s",str1);
   insert(str1,str2);
   return 0;
}
void insert(char str1[],char str2[]){
	int i;
	for(i=0;i<strlen(str1);i++){ //i=4时跳出循环
		str2[2*i]=str1[i];
		if(i==0){
           str2[1]=' ';
		}
		if(i>0){
		str2[2 * i-1]=' ';//因为i=0时，str2[-1]不服要求
		}
	}
    str2[2*i-1]='\0';         //字符串结束标志
	printf("%s\n",str2);//如果以字符串格式输出str2，str2中存放的必须是字符串，而字符串必须有字符串结束标志‘\0’
}