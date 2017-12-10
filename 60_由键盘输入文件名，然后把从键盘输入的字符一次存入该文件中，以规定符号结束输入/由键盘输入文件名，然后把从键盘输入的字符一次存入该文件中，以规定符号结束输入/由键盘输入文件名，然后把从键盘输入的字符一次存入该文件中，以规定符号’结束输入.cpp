//由键盘输入文件名，然后把从键盘输入的字符一次存入该文件中，以‘#’结束输入

#include<stdio.h>
#include<stdlib.h>

int main(){
	char filename[10];
	FILE *fp;
	char ch;
	printf("input filename:");
	gets(filename);
	if((fp = fopen(filename,"w")) == NULL) {
	    printf("can't open %s file!",filename);
		exit(1);//退出程序
	}
	ch=getchar();//接收输入文件名结束后，输入的回车符
	printf("please input a string that you want to save to disk(end with '#')");
  	;//接收从键盘输入的第一个字符
	while((ch = getchar()) != '#'){
	   fputc(ch,fp);//将该字符保存到文件中  
	   putchar(ch);//将字符输出到控制台
	}
	fclose(fp);//关闭文件
	putchar('\n');
	return 0;
}