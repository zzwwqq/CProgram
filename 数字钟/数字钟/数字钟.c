#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
void gotoxy(int x, int y)
{
	COORD gotoxy;
	HANDLE hOutput;
	gotoxy.X = x;
	gotoxy.Y = y;
	hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOutput, gotoxy);
}
typedef struct
{
	int x;
	int y;
}point;
time_t now;
struct tm *pt, t1, t2;
int printpoint(point p)
{
	point p1;
	p1.x = p.x + 2;
	p1.y = p.y + 4;
	gotoxy(p1.x, p1.y);
	printf("●●");
	gotoxy(p1.x, p1.y + 1);
	printf("●●");
	p1.y += 4;
	gotoxy(p1.x, p1.y);
	printf("●●");
	gotoxy(p1.x, p1.y + 1);
	printf("●●");
	return 0;
}
int print0(point p)
{
	int i = 0;
	for (; i<13; i++)
	{
		gotoxy(p.x + 1, p.y + i);
		if (i == 0 || i == 12)
			printf("■■■■");
		else
			printf("■%4s■", " ");
	}
	return 0;
}
int print1(point p)
{
	int i = 0;
	for (; i<13; i++)
	{
		gotoxy(p.x + 1, p.y + i);
		printf("%5s■", "");
	}
	return 0;
}
int print2(point p)
{
	int i = 0;
	for (; i<13; i++)
	{
		gotoxy(p.x + 1, p.y + i);
		if (i == 0 || i == 6 || i == 12)
			printf("■■■■ ");
		else if (i>0 && i<6)
			printf("%6s■", " ");
		else printf("■");
	}
	return 0;
}
int print3(point p)
{
	int i = 0;
	for (; i<13; i++)
	{
		gotoxy(p.x + 1, p.y + i);
		if (i == 0 || i == 6 || i == 12)
			printf("■■■■");
		else
			printf("%6s■", "");
	}
	return 0;
}
int print4(point p)
{
	int i = 0;
	for (; i<13; i++)
	{
		gotoxy(p.x + 1, p.y + i);
		if (i<6)
			printf("■%4s■", "");
		else if (i == 6)
			printf("■■■■");
		else
			printf("%6s■", "");
	}
	return 0;
}
int print5(point p)
{
	int i = 0;
	for (; i<13; i++)
	{
		gotoxy(p.x + 1, p.y + i);
		if (i == 0 || i == 6 || i == 12)
			printf("■■■■");
		else if (i>0 && i<6)
			printf("■");
		else
			printf("%6s■", "");
	}
	return 0;
}
int print6(point p)
{
	int i = 0;
	for (; i<13; i++)
	{
		gotoxy(p.x + 1, p.y + i);
		if (i == 0 || i == 6 || i == 12)
			printf("■■■■");
		else if (i>6 && i<12)
			printf("■%4s■", "");
		else if (i>0 && i<6)
			printf("■");
	}
	return 0;
}
int print7(point p)
{
	int i = 0;
	for (; i<13; i++)
	{
		gotoxy(p.x + 1, p.y + i);
		if (i == 0)
			printf("■■■■");
		else
			printf("%6s■", "");
	}
	return 0;
}
int print8(point p)
{
	int i = 0;
	for (; i<13; i++)
	{
		gotoxy(p.x + 1, p.y + i);
		if (i == 0 || i == 6 || i == 12)
			printf("■■■■");
		else
			printf("■%4s■", "");
	}
	return 0;
}
int print9(point p)
{
	int i = 0;
	for (; i<13; i++)
	{
		gotoxy(p.x + 1, p.y + i);
		if (i == 0 || i == 6 || i == 12)
			printf("■■■■");
		else if (i>0 && i<6)
			printf("■%4s■", "");
		else
			printf("%6s■", "");
	}
	return 0;
}
int clear(point p)
{
	int i = 0;
	for (; i<13; i++)
	{
		gotoxy(p.x, p.y + i);
		printf("%16s", "");
	}
	return 0;
}
int printtime(point p, int n)
{
	int a, b;
	point pp;
	a = n / 10; b = n % 10;
	pp.x = p.x + 9, pp.y = p.y;
	switch (a)
	{
	case 0:print0(p); break;
	case 1:print1(p); break;
	case 2:print2(p); break;
	case 3:print3(p); break;
	case 4:print4(p); break;
	case 5:print5(p); break;
	}
	switch (b)
	{
	case 0:print0(pp); break;
	case 1:print1(pp); break;
	case 2:print2(pp); break;
	case 3:print3(pp); break;
	case 4:print4(pp); break;
	case 5:print5(pp); break;
	case 6:print6(pp); break;
	case 7:print7(pp); break;
	case 8:print8(pp); break;
	case 9:print9(pp); break;
	}
	return 0;
}
int main()
{
	point phour, pmin, psec, point1, point2;
	phour.x = 9, pmin.x = 32, psec.x = 55;
	phour.y = pmin.y = psec.y = 7;
	point1.x = 25, point2.x = 49;
	point1.y = point2.y = 7;
	pt = localtime(&now);
	now = time(0);
	t1 = *pt;
	printtime(phour, t1.tm_hour);
	printpoint(point1);//输出小时和分钟间格间的两点.
	printtime(pmin, t1.tm_min);
	printpoint(point2);//输出分钟和秒钟间的间隔的两点
	printtime(psec, t1.tm_sec);

	while (1)
	{
		now = time(0);
		pt = localtime(&now);
		t2 = *pt;
		if (t2.tm_sec != t1.tm_sec)
		{
			t1 = t2;
			system("cls");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
			printtime(phour, t1.tm_hour);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
			printpoint(point1);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
			printtime(pmin, t1.tm_min);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
			printpoint(point2);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
			printtime(psec, t1.tm_sec);
		}


	}
	system("pause");
	return 0;
}
