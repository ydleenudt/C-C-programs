/*学生的记录由学号和成绩组成，N名学生的数据已放入主函数中的结构体数组s中
请编写函数fun，其功能是：把分数最高的学生数据放在b所指的数组中。
注意：分数最高的学生可能不止一个，函数返回分数最高的学生的人数。*/


#include<stdio.h>
struct student
{
	unsigned int student_id;
	int grade;
}; //s=student
unsigned int fun(student s[])
{
	int i;
	int count=0;
	int len=sizeof(student s[])/sizeof(student s[0]);
	student b[len];
	int max_grade=s[0].grade;
	for(i=1; i<len; i++)
	{
		if(s[i].grade>max_grade)	max_grade=s[i].grade;
	}
	for(i=0; i<len; i++)
	{
		if(s[i].grade=max_grade){
			b[count++]=s[i];
		}
	}
	return count;
}


int main()
{
	int N=2;
	student s[N]={{001, 90}, {002, 90}, {003, 89}};
	printf("The number of students who have the highest score is: %d ", fun(s[N]));
}
