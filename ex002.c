/*编写函数fun，其功能是：求出1~1000之间能被7或11整除，但不能同时被7和11整除的所有整数，
并将其放在a所指的数组中，通过n返回这些数的个数。*/
#include<stdio.h>
int fun(int a[])
{
	unsigned int n=0;
	int i;
	for(i=1; i<=1000; i++)
	{
		if((i%7==0||i%11==0)&&i%77!=0){
		n++;    a[n]=i;}
	}
	return n;
}
int main()
{
    int a[1000];
    printf("the required number is: %d",fun(a));
}
/*【参考答案】
void fun (int *a, int *n)
{
int i,j=0;
for(i=1;i<=1000;i++)
if((i%7==0||i%11==0)&&i%77!=0)
a[j++]=i;
*n=j;
}
*/
