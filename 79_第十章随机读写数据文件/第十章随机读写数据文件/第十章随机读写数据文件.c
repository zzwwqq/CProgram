#include<stdio.h>
int main()
{
	long i;
	FILE *fp1,*fp2;
	fp1 = fopen("E:\\C程序\\52_第十章对文件的输入和输出例1\\第十章对文件的输入和输出例1\\file1.dat","r");
	fp2 = fopen("file2.dat","w");//打开file2.dat文件，权限为只写，如果没有此文件则新建一个
	while(!feof(fp1))           //判断文件位置标记是否已经指到了文件末尾
	{
		putchar(getc(fp1));    //从文件中读取字符输出到控制台
	}
	putchar(10);              //换行
	//rewind(fp1);//使文件位置标记返回文件头
	fseek(fp1,-1L,2);//（无论文件位置标记此时是否在文件末尾）将文件位置标记从文件末尾处向后退1个字节
    i = ftell(fp1);//测定文件位置标记的当前位置，返回一个长整型数
	if(i == -1L)//如不存在fp1所指向的文件则返回-1L
	{
		printf("error\n");
	}
	printf("文件位置标记当前位置在%ld处\n",i);
	while(!feof(fp1))
	{
		putc(getc(fp1),fp2);//从文件中重新逐个读字符
	}
	fclose(fp1);//关闭文件
	fclose(fp2);

	return 0;
}