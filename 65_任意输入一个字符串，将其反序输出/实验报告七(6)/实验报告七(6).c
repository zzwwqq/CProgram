//任意输入一个字符串，将其反序输出
#include<stdio.h>
#include<string.h>//在使用字符串处理函数的时候，应该在程序文件的开头用这一行语句
int main()
{    char str[100];//定义字符数组str，其中的元素最多有一百个
     int i;
     int n;//n变量用于接收字符串长度值
	 scanf("%s",&str);//从键盘输入字符串放在字符数组中
   n=strlen(str);//strlen函数作用是测字符串长度的函数，格式为strlen（字符数组）。这一行作用是把用户输入的字符串的长度值赋给变量n
	for( i=n-1;i>=0;i--)
		printf("%c",str[i]);//通过循环反序输出字符串
	printf("\n");
	return 0;
}
