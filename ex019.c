/*
规定输入的字符串中只包含字母和*号。
请编写函数fun，其功能是：将字符串中的前导*号全部移到字符串的尾部。
例如，字符串中的内容为："*******A*BC*DEF*G****"，移动后，字符串中的内容应当是："A*BC*DEF*G***********"。
在编写函数时，不得使用C语言提供的字符串函数。
*/

#include <stdio.h>
#include <string.h>
void fun(char *p, char *s)
{
    int n=0;
    int i;
    while(*p == '*')
    {
        p++;
        n++;
    }
    char *t = p;
    while(*t)
    {
        t++;
    }
    for(i=0; i<n; i++)
    {
        *t = '*';
        t++;
    }

    s = p;
}

int main()
{
    char *p = "*******A*BC*DEF*G****";
    char *s;
    fun(p, s);
    puts(s);
}


/*
void fun( char *a )
{int i=0,n=0;
char *p;
p=a;
while (*p=='*')
{n++;p++;}
while(*p)
{a[i]=*p;i++;p++;}
while(n!=0)
{a[i]='*';i++;n--;}
a[i]='\0';
}
*/
