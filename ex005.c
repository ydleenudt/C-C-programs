/*某学生的记录由学号、8门课程成绩和平均分组成，学号和8门课程的成绩已在主函数中给出
请编写函数fun，其功能是：求出该学生的平均分，并放入记录的ave成员中
例如，学生的成绩是：85.5,76,69.5,85,91,72,64.5，87.5，则他的平均分应为78.875。*/
#include<stdio.h>
double fun(double a[])
{
	int i=0;
	double sum=0.0;
	for(i=0; i<8; i++)
	{
		sum+=a[i];
	}
	return sum/8.0;
}

int main()
{
    double a[]={85.5,76,69.5,85,91,72,64.5,87.5};
    printf("The ave should be %lf", fun(a));
}

/*【参考答案】
void fun(STREC *a)
{int i;
a->ave=0.0;
for(i=0;i<N;i++)
a->ave=a->ave+a->s[i];
a->ave/=N;
}
*/
