/*
假定输入的字符串中只包含字母和*号。请编写函数fun，
其功能是：除了尾部的*号之外，将字符中的其它的*号全部删除。形参p已指向字符串中最后的一个字母。
在编写函数时，不得使用C语言提供的字符串函数。
例如，字符串中的内容为****A*BC*DEF*G*******，删除后，字符串中的内容应当是ABCDEFG*******。
 */

#include <stdio.h>
#include <stdlib.h>
void fun(char *s, char *t)
{
    int nforG=0, n=0;
    int i;
    while(*(s+n))
    {
        if(*(s+n) == '*'){
        n++;
        continue;
        }
        else{
        nforG = n;
        *(t++) = *(s+nforG);
        n++;
        }
    }
    while(*(s+nforG+1))
    {
        *(t++) = '*';
        nforG++;
    }
    *t = '\0';
}

int main()
{
    char s[]="****A*BC*DEF*G*******";
    char *t;
    t = (char *)malloc(40);
    fun(s, t);
    puts(t);
}

/*
参考答案：
void fun( char *a, char *p )
{char *t=a;
for(;t<=p;t++)
if(*t!='*')
*(a++)=*t;
for(;*t!='\0';t++)
*(a++)=*t;
*a='\0';}
*/
