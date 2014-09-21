/*请编写函数fun，其功能是：找出2×M整型二维数组中最大元素的值，并将此值返回调用函数*/
#include<stdio.h>
#define M 5
int fun(int a[][M])
{
	int max=a[0][0];
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<M; j++)
		{
			if(a[i][j]>=max){
			max=a[i][j];}
		}
	}
	return max;
}
int main()
{
    int a[2][M]={1, 2, 3, 4, 5, 6, 7, 8};
    printf("the max element of a is %d.",fun(a));
}
/*【参考答案】
int fun (int a[][M])
{int i,j,max=a[0][0];
for(i=0;i<2;i++)
fr(j=0;j<M;j++)
if(max<a[i][j])
max=a[i][j];
return max;
}
*/
