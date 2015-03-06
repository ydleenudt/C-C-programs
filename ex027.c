/*
学生的记录由学号和成绩组成。N名学生的数据已放入主函数中的结构体数组s中
请编写函数fun，其功能是：把高于等于平均分的学生数据放在b所指的数组中，高于等于平均分的学生人数通过形参n传回，平均分通过函数值返回。
 */


/*
【参考答案】
double fun( STREC *a, STREC *b, int *n )
{int i;
double av=0.0;
*n=0;
for(i=0;i<N;i++)
av=av+a[i].s;
av=av/N;
for(i=0;i<N;i++)
if(av<=a[i].s)
{ b[*n]=a[i];*n=*n+1;}
return av; }
 */
