/*
编写函数fun，其功能是：将ss所指字符串中所有下标为奇数位上的字母转换为大写(若该位置上不是字母，则不转换)。
例如，若输入"abc4EFg"，则应输出"aBc4EFg"。
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void fun(char *ss)
{
    int i=0;
    for(; *(ss+i)!='\0'; i++)
    {
        if((*(ss+i))>='a'&&(*(ss+i))<='z'&&(i%2!=0))
        {
            *(ss+i) = *(ss+i) - 32;
        }
    }
}

int main(void)
{
    /*
    char *ss;
    ss = (char *)malloc(10);
    strcpy(ss, "abc4EFg");
    */
    char ss[] = "abc4EFg";
    fun(ss);
    puts(ss);
    return 0;
}
