/*
编写函数fun，其功能是：根据以下公式计算s，并计算结果作为函数值返回，n通过形参传入。
例如：若n的值为11时，函数的值为1.833333
 */

#include <stdio.h>
#include <stdlib.h>

double plusto1(int n)
{
    return n*(n+1)/2;
}

double fun(int n)
{
    double sum=0;
    int i;
    for(i=1; i<=n; i++)
    {
        sum += 1.0/plusto1(i);
    }
    return sum;
}

int main()
{
    int n=11;
    printf("%lf\n", fun(n));
    return 0;
}
