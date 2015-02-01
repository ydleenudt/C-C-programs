/*学生的记录由学号成绩组成，N名学生的数据已放入主函数中的结构体数组s中
请编写函数fun，其功能是：函数返回该学号的学生数据，指定的学号在主函数中输入。
若没找到指定学号，在结构体变量中给学号置空串，给成绩置-1，作为函数值返回。(用于字符串比较的函数是strcmp)。
*/
#include <stdio.h>
#include <stdbool.h>

#define N 3 //N is the number of studnts
#define MAX_INFO 10 //MAX_INFO is the length of info the student have

Student fun(int studentid,Student s[])
{
	int i=0;
	bool found = false;
	while(s[i].id!=-1)
	{
		if(strcmp(s[i].id, studentid)==0)
		{
			found = true;
			break;
		}
		else	i++;
	}

	if(found = true)
		return s[i];
	else
	{
		s[i].id=-1;
		return -1;
	}
}


int main()
{
	struct Student
	{
		int id;
		int score;
	};
	struct Student s[N];
	int i;
	for(i=0; i<N; i++)
	{
		s[i].id = i;
		s[i].score = 100;
	}

	printf("%s\n",fun(1,s));
	printf("%s\n",fun(2,s));
	printf("%s\n",fun(10,s));
}

