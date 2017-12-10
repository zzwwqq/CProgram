#include<stdio.h>
#include<stdlib.h>
struct Student_type
{
	char name[10];
	int age;
	int num;
	char addr[15];
}stud[10];
int main()
{
	int i;
	FILE *fp;
	if((fp=fopen("E:\\C程序\\第十章以二进制方式向文件读写数据\\第十章以二进制方式向文件读写数据\\stu.dat","rb"))==NULL)
	{
		printf("can't open file\n");
		exit(0);
	}
	for(i =0;i<10;i+=2)
	{
		fseek(fp,i*sizeof(struct Student_type),0);
		fread(&stud[i],sizeof(struct Student_type),1,fp);
		printf("%-6s%-4d%-6d%-15s\n",stud[i].name,stud[i].num,stud[i].age,stud[i].addr);//负号为左对齐，
	}
	fclose(fp);
	return 0;
}