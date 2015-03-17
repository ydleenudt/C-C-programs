/*
请编写函数fun,该函数的功能是：将M行N列的二维数组中的字符数据,按列的顺序依次放到一个字符串中。
例如,若二维数组中的数据为
W W W W
S S S S
H H H H
则字符串中的内容应是：WSHWSHWSHWSH。
*/

#include <stdio.h>
#include <stdlib.h>

#define M 3
#define N 4

void fun(char s[M][N], char *l)
{
    int i, j, k=0;
    for(i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
        {
            l[k++] = s[j][i];
        }
    }
    l[k] = '\0';
}

int main()
{
    char s[M][N] = {{'W','W','W','W'},{'S','S','S','S'},{'H','H','H','H'}};
    char l[30];
    fun(s, l);
    puts(l);
}
