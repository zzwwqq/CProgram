//连续不断慢速输出字符
#include<windows.h>
#include<stdio.h>
void SlowPrint(char*string,int sleeptime)
{
	int i=0;
	while(string[i]!='\0')
	{
		printf("%c",string[i]);
		Sleep(sleeptime);
		i++;
	}
}
int main()
{
	SlowPrint("这个程序会一个一个慢慢输出每个字符",300);
	printf("\n");
	Sleep(2000);
	return 0;
}
