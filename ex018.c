/*
编写函数fun，其功能是：利用下面的简单迭代方法求方程cos(x)－x＝0的一个实根。

迭代步骤如下：
(1)取x1初值为0.0；
(2)x0＝x1，将x1的值赋给x0；
(3)x1＝cos(x0)，求出一个新的x1；
(4)若x0－x1的绝对值小于0.000001，
执行步聚(5)，否则执行步聚(2)；
(5)所求x1就是方程cos(x)－x＝0的一
个实根，作为函数值返回。
程序将输出结果Root＝0.739086。
*/
#include <stdio.h>
#include <math.h>


double fun(void)
{
    double x1 = 0.0;
    double x0 = x1;
    x1 = cos(x0);
    while(fabs(x0-x1) >= 0.000001)
    {
        x0 = x1;
        x1 = cos(x0);
    }
    return x1;
}

int main()
{
    printf("%lf\n", fun());
}

/*
参考答案：
double fun()
{ double x0,x1;
x1=0.0;
do{
x0=x1;
x1=cos(x0);
}while(fabs(x0-x1)>=1e-6);
return x1;}
*/
