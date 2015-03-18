/*
请编写函数fun，其功能是：将一个数字字符串转换为一个整数(不得调用C语言提供的将字符串转换为整数的函数)。例如，若输入字符串"－1234"，则函数把它转换为整数值－1234。
 */

#include <stdio.h>
#include <stdlib.h>

int fun(char *n)
{
    int num_out=0;
    //marks whether the number is negetive or positive
    bool n_p;
    if(*n=='-'){
        n_p = 1;
        n++;
    }
    else{
        n_p = 0;
    }
    
    while(*n)
    {
        num_out = num_out*10 + (*n-48);
        n++;
    }

    if(n_p == 1){
        num_out = -num_out;
    }

    return num_out;
}

int main()
{
    char n[]="-1234";
    printf("%d\n", fun(n));
}
