/*
规定输入的字符串中只包含字母和*号。
编写函数fun，其功能是：将字符串中的前导*号全部删除，中间和尾部的*号不删除。
例如，字符串中的内容为："*******A*BC*DEF*G****"，删除后字符串中的内容应当是："A*BC*DEF*G****"。编写函数时，不得使用C语言提供的字符串函数。
 */

#include <stdio.h>
#include <stdlib.h>


void fun(char *s)
{
    char *p = s;
    while(*p == '*'){
        p++;
    }
    while(*p != '\0'){
        *(s++) = *(p++);
    }
    *s = '\0';
}


int main()
{
    char s[50] = "*******A*BC*DEF*G****";
    fun(s);
    puts(s);
}
