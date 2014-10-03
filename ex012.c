/*学生的记录由学号和成绩组成，N名学生的数据已放入主函数中的结构体数组s中
请编写函数fun，其功能是：把分数最高的学生数据放在b所指的数组中
注意：分数最高的学生可能不止一个，函数返回分数最高的学生的人数。*/





/*【参考答案】
int fun( STREC *a, STREC *b )
{int i,j=0,max=a[0].s;
for(i=0;i<N;i++)
if(max<a[i].s) max=a[i].s;
for(i=0;i<N;i++)
if(max==a[i].s)
b[j++]=a[i];
return j;
}
*/
