/*规定输入的字符串中只包含字母和*号。请编写函数fun
其功能是：除了字符串前导的*号之外，将串中其它*号全部删除
在编写函数时，不得使用C语言提供的字符串函数
例如，字符串中的内容为：****A*BC*DEF*G*******，删除后，字符串中的内容应当是：****ABCDEFG。*/

#include"stdio.h"

void fun(char *a)
{
	char *p=a;
	int i=0;
	while(*p&&*p=='*')
	{
		i++;
		p++;
	}
	while(*p)
	{
		if(*p!='*')
		{
			a[i]=*p;
			p++;
			i++;
		}
		else	p++;
	}
	a[i]='\0';
}

int main()
{
	char a[100]="****A*BC*DEF*G*******";
	fun(a);
	puts(a);
}







/*【参考答案】
void fun( char *a )
{
int i=0;
char *p=a;
while(*p&&*p=='*')
{a[i]=*p;
i++;
p++;}
while(*p)
{if(*p!='*')
{a[i]=*p;i++;}
p++;}
a[i]='\0';
}
*/
