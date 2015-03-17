/*
请编写函数fun,该函数的功能是：将放在字符串数组中的M个字符串(每串的长度不超过N),按顺序合并组成一个新的字符串。
例如,若字符串数组中的M个字符串为{"AAAA","BBBBBBB","CC"}则合并后的字符串内容应该是"AAAABBBBBBBCC"
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define M 3
#define N 8

void fun(char (*s)[N], char *l)
{
    int i;
    for(i=0; i<M; i++)
    {
        strcat(l, s[i]);
    }
}

int main()
{
    char s[M][N]={"AAAA","BBBBBBB","CC"};
    char l[30];
    fun(s, l);
    puts(l);
    return 0;
}
