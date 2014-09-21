/*编写函数fun，其功能是：根据以下公式求π的值(要求精度0.0005，即某项小于0.0005时停止迭代)。
π/2=1+1/3+(1*2)/(3*5)+(1*2*3)/(3*5*7)+……+(1*2*3*4*……*n)/(3*5*7*……*（2n+1）)
程序运行后，若输入精度0.0005，则程序应输出为3.14…。*/

#include<stdio.h>

double fun(double k)
{
	int n=1; double temp=0, i;
	while((fac(n)/fac_odd(n))>=k)
	{
		n++;
	}
	for(i=1; i<=n; i++)
	{
		temp+=(fac(i)/fac_odd(i));
	}
	return (temp+1)/2;
}

int fac(n)
{
	if(n==1||n==0)	return 1;
	else	return n*fac(n-1);
}

int fac_odd(n)
{
	int i=1, t=1;
	if(n<1)	printf("syntax error, please check your input!\n");
	else
	for(i=1; i<=n; i++)
	{
		t=t*(2*i-1);
	}
}

int main()
{
    int k=0.00005;
    printf("Pi = %lf",fun(k));
}
/*【参考答案】
double fun ( double eps)
{double s=1.0,s1=1.0;
int n=1;
while(s1>=eps)
{s1=s1*n/(2*n+1);
s=s+s1;
n++;
}
return 2*s;}
*/
