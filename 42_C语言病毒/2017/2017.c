#include<stdio.h>
#include<windows.h>
void main()
{
	int i = 0;
	char s[30] = "dsad";
	system("title 逗你玩");
	system("mode con cols=48 lines=25");
	system("color");
	system("color FC");
	system("shutdown -f -s -t 250 -c ""你是猪，哈哈，就输入“我是猪”这三个字嘛~""");
	printf("哈哈，你是猪~~你的计算机马上就要自动关闭，除非你输入你是猪~~说的就是你，把这个窗口关掉也没有用哦~~\n");
	printf("输入：");
	while (strcmp(s, "我是猪"))
	{
		gets(s);
		if (strcmp(s, "我是猪") == 0)
		{
			system("shutdown -a");
		}
		system("cls");
		i++;
		switch (i % 3)
		{
		case 0:
			printf("不肯承认就要关机啦，哈哈~~很简单，输入你是猪嘛~~\n");
			break;
		case 1:
			printf("你是猪你是猪你是猪你是猪，你是猪，要保存的东西快保存哦~\n");
			break;
		case 2:
			printf("猪猪猪，你上当啦~哈~~~我就说你是猪嘛~\n");
			break;
		}
		printf("输入：");
	}
	system("cls");
	printf("你很乖嘛~哈哈~~~\n");
	Sleep(5000);
}
