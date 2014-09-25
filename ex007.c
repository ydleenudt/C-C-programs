/*编写函数fun，其功能是：将所有大于1小于整数m的非素数存入xx所指数组中，非素数的个数通过k返回。
例如，若输入17，则应输出：4　6　8　9　10　12　14　15　16。*/

#include<stdio.h>
#include<math.h>
int isprime(unsigned int num)
{
	int i=2;
	for(i=2; i<=sqrt(num); i++)
	{
		if(num%i==0)	return 1;
	}
	return 0;
}

int fun(int m, int xxx[])
{
	int i=2;
	int count=0;
	for(i=2; i<m; i++)
	{
		if(isprime(i)!=0)   {xxx[count++]=i;
		printf("%d", xxx[count-1]);}
	}
	return count;
}

int main()
{
	int xxx[100], xx[100];
	int i;
	int m=17;
	printf("the number of integers which is not a prime is %d", fun(m, xxx));

}

/*【参考答案】
void fun( int m, int *k, int xx[] )
{int i,j,n=0;
for(i=4;i<m;i++)
{ for(j=2;j<i;j++)
if(i%j==0) break;
if(j<i) xx[n++]=i;
}
*k=n;
}
*/
