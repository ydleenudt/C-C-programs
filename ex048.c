/*
编写函数fun，其功能是：求Fibonacci数列中大于t的最小的数，结果由函数返回。Fibonacci数列F(n)的定义为：
F(0)＝0，F(1)＝1
F(n)＝F(n－1)＋F(n－2)
例如，当t＝1000时，函数值为1597。
 */

#include <stdio.h>
#include <stdlib.h>

int fib(int n)
{
    if(n==0 || n==1){
        return n;
    }
    else{
        return fib(n-1) + fib(n-2);
    }
}
int fun(int t)
{
    int i;
    for(i=0; fib(i)<=t; i++)
    {
        continue;
    }
    return fib(i);
}

int main()
{
    int t=1000;
    printf("%d\n", fun(t));
}
