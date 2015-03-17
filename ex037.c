/*
编写函数fun，其功能是：删除一个字符串中指定下标的字符。其中，a指向原字符串，删除指定字符后的字符串存放在b所指的数组中，n中存指定的下标。
例如，输入一个字符串world，然后输入3，则调用该函数后的结果为word。
 */

#include <stdio.h>
#include <stdlib.h>

void fun(char *a, char *b, int n)
{
    int k=0, i;
    for(i=0; i<n-1; i++){
        b[k++] = a[i];
    }
    for(i=n; a[i]!='\0'; i++)
    {
        b[k++] = a[i];
    }
    b[k] = '\0';
}

int main()
{
    int n=3;
    char a[] = "world";
    char b[10];
    fun(a, b, n);
    puts(a);
    puts(b);
}
