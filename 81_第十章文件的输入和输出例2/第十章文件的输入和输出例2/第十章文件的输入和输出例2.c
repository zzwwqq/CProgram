#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{   
	FILE *in,*out;
	char ch,infile[10],outfile[10];
	char filepath[]={"E:\\C程序\\52_第十章 对文件的输入和输出例1\\第十章对文件的输入和输出例1\\"};
	char filepath2[]={"E:\\C程序\\第十章文件的输入和输出例2\\第十章文件的输入和输出例2\\"};
	
	printf("请输入读入文件的名字：");
	scanf("%s",infile);
	printf("请输入输出文件的名字：");
	scanf("%s",outfile);
	if((in=fopen(strcat(filepath,infile),"r"))==NULL)
	{
        printf("无法打开%s文件\n",infile);
		exit(0);
	}
	if((out=fopen(strcat(filepath2,outfile),"w"))==NULL)
	{
        printf("无法打开%s文件\n",outfile);
		exit(0);
	}
	while(!feof(in))
	{
        ch=fgetc(in);
		fputc(ch,out);
		putchar(ch);
	}
	putchar(10);
	fclose(in);
	fclose(out);
     return 0;
}
