/*
学生的记录由学号和成绩组成，N名学生的数据已放入主函数中的结构体数组s中
请编写函数fun，其功能是：按分数降序排列学生的记录，高分在前，低分在后
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct Student
    {
        char name[10];
        int score;
    }stud;

void fun(stud students[],int N)
{
    int i, j, temp;
    for(i=0; i<N; i++)
    {
        for(j=N-1; j>0; j--)
        {
            if(students[j].score>students[j-1].score){
                temp = students[j-1].score;
                students[j-1].score = students[j].score;
                students[j].score = temp;
            }
        }
    }
}

int main()
{
    int i;
    stud students[3];

    for(i=0; i<3; i++)
    {
        students[i].score = 90+i;
    }

    fun(students,3);
    for(i=0; i<3; i++)
    {
        printf("score of student%d is %d\n", i, students[i].score);
    }
}
