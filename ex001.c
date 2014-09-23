/*编写函数fun，其功能是：根据以下公式求π的值(要求精度0.0005，即某项小于0.0005时停止迭代)。
π/2=1+1/3+(1*2)/(3*5)+(1*2*3)/(3*5*7)+……+(1*2*3*4*……*n)/(3*5*7*……*（2n+1）)
程序运行后，若输入精度0.0005，则程序应输出为3.14…。*/

#include<stdio.h>

double fac(int n)
{
	if(n==1||n==0)	return 1.0;
	else	return (double)(n*fac(n-1));
}

double fac_odd(int n)
{
	int i=1; double t=1.0;
	//if(n<1)	printf("syntax error, please check your input!\n");

	for(i=0; i<=n; i++)
	{
		t=t*(2*i+1);
	}
	return t;
}

double fun(double k)
{
	int n=1,i; double temp=0.0;
	while((fac(n)/fac_odd(n))>=k)
	{
		n++;
	}
	for(i=0; i<=n; i++)
	{
		temp+=(fac(i)/fac_odd(i));
		printf("%lf %lf %lf\n", temp, fac(i), fac_odd(i));
	}
	return (temp)*2;
}



int main()
{
    double k=0.00005;
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
