/*
编写函数fun，其功能是：将两个两位数的正整数a、b合并成一个整数放在c中。
合并的方式是：将a数的十位和个位数依次放在c数的个位和百位上，b数的十位和个位数依次放在c数的千位和十位上。
例如，当a＝45，b＝12时，调用该函数后，c＝1524。
 */

#include <stdio.h>
#include <stdlib.h>

void fun(int a, int b, int *c)
{
    *c = a/10 + (a%10)*100 + (b%10)*10 + (b/10)*1000;
}

int main()
{
    int a=45, b=12, c;
    fun(a,b,&c);
    printf("%d\n", c);
}
