//有N个结构体变量，内含学生学号，姓名，三门课程成绩。要求输出平均成绩最高的学生信息（包括学号姓名三门课程成绩，平均成绩）


#include<stdio.h>
#define N 3//学生人数为3
struct Student//结构体类型
{
	int num;          //学号
	char name[20];    //姓名
	float score[3];       //成绩
	float aver;       //三门课程的平均成绩
};
int main()
{
    void input(struct Student stu[]);//函数声明
	struct Student max(struct Student stu[]);//函数声明
	void print(struct Student stud);//函数声明
	struct Student stu[N],*p;//定义结构体类型的数组和指针

	p=stu;//将数组的首地址赋给指针变量p
	input(p);//调用input函数
	print(max(p));//调用print函数，以max函数的返回值作实参

	return 0;
}
void input(struct Student stu[])//定义input函数，作用：输入数据和求三门课成绩的平均值
{
	int i;
	printf("请输入各学生的信息：学号，姓名，三门课成绩：\n");
	for(i=0;i<N;i++)
	{
		scanf("%d %s %f %f %f",&stu[i].num,stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);//输入数据
		stu[i].aver=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3.0;//求平均值
	}
}
struct Student max(struct Student stu[])//定义max函数，作用：找出平均成绩最高的学生的序号
{
	int i,m;//m变量用来存放成绩最高的学生在数组中的序号
	m=0;//假设第一个人平均成绩最高，即在数组中的序号为0，因为数组序号从零开始的
	for(i=0;i<N;i++)//用打擂台法找出成绩最高的学生的序号
	{
		if(stu[i].aver>stu[m].aver)//如果某个学生的成绩大于m序号学生的成绩就把这个学生的序号赋给m，也就是说m永远是成绩最高的那个学生的序号
			m=i;
		return stu[m];//返回包含该生信息的结构体元素
	}
}
void print(struct Student stud)
{
	printf("\n成绩最高的学生是：\n");
	printf("学号：%d\n姓名：%s\n三门课成绩：%5.1f,%5.1f,%5.1f\n平均成绩：%6.2f\n",
		stud.num,stud.name,stud.score[0],stud.score[1],stud.score[2],stud.aver);
}