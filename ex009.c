/*编写函数fun，其功能是：计算n门课程的平均分，结果作为函数值返回。
例如：若有5门课程的成绩是：90.5,72,80,61.5,55，则函数的值为：71.80*/
#include<stdio.h>

float fun(int n)
{
	int i;
	float sum=0, temp;
	for(i=0; i<n; i++){
	printf("\nInput a num:");
	scanf("%f",&temp);
	sum+=temp;}
	return sum/n;
}

int main()
{
	int n=5;
	printf("The ave is %f.\n", fun(n));
}


/*【参考答案】
float fun ( float *a , int n )
{
int i;
float av=0.0;
for(i=0; i<n;i++) /*求分数的总和
av=av+a[i];
return(av/n); /*返回平均值
}
*/
