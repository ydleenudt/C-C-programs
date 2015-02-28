/*
编写函数fun，其功能是：将a、b中的两个两位正整数合并成一个新的整数放在c中。
合并的方式是：将a中的十位和个位数依次放在变量c的百位和个位上，b中的十位和个位数依次放在变量c的十位和千位上。
例如，当a＝45，b＝12，调用该函数后c＝2415。
 */

#include <stdio.h>
int fun(int a, int b, int c)
{
    int c0, c1, c2, c3;
    c0 = a%10;
    c2 = (a - c0)/10;
    c3 = b%10;
    c1 = (b - c3)/10;
    c = c0 + 10*c1 + 100*c2 + 1000*c3;
    return c;
}

int main()
{
    int a=45, b=12;
    int c;
    printf("%d",fun(a, b, c));
    return 0;
}

/*
参考答案：
void fun(int a, int b, long *c)
{*c=a%10+(b/10)*10+(a/10)*100+(b%10)*1000;
}

*/
