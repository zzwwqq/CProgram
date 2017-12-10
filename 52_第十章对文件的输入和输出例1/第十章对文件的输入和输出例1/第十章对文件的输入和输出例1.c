//从键盘输入一些字符，逐个把它们送到磁盘上去，直到用户输入一个“#”为止//

#include<stdio.h>/*标准输入输出函数头文件*/
#include<stdlib.h>/*标准c库函数头文件*/
int main()
{
	FILE * fp;/*定义一个指向文件类型的指针变量fp*/
	char ch,filename[10];/*定义一个字符型变量ch，字符型数组filename含有十个元素*/
	printf("请输入所用的文件名：");
	scanf("%s",filename);/*接收键盘输入的文件名*/
	if((fp=fopen(filename,"w"))==NULL)/*打开输出文件并使fp指向此文件*/
	{
		printf("无法打开此文件\n");/*如果打开时出错，就输出打不开的信息*/
		exit(0);/*终止程序*/
	}
	ch=getchar();/*用来接收最后输入的回车符*/
	printf("请输入一个准备存储到磁盘的字符串（以#结束）：");
	ch=getchar();/*用来接收从键盘输入的第一个字符*/
	while(ch!='#')/*当输入‘#’时结束循环*/
	{
		fputc(ch,fp);/*向磁盘文件输出一个字符*/
		putchar(ch);/*将输出的字符显示在屏幕上*/
		ch=getchar();/*再接收从键盘输入的一个字符*/
	}
	fclose(fp);/*关闭文件*/
	putchar(10);/*向屏幕输出一个换行符*/

	return 0;
}
