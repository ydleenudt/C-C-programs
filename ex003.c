/*规定输入的字符串中只包含字母和*号。编写函数fun，其功能是：删除字符串中所有的*号。
编写函数时，不得使用C语言提供的字符串函数。
例如，字符串中的内容为：****A*BC*DEF*G*******，删除后字符串中的内容应当是：ABCDEFG。
*/
#include<stdio.h>
#include<string.h>
void fun(char a[])
{
	int i=0, mark=0;//mark marks the consequence of string.
	for(i=0; a[i]!='\0'; i++) //i<strlen(a[])
	{
		if(a[i]!='*'){
		a[mark]=a[i];
		mark++;}
	}
	for(i=mark; a[i]!='\0'; i++){
	a[i]=NULL;}
}

int main()
{
    char a[]="****A*BC*DEF*G*******";
    fun(a);
    puts (a);
}
/*【参考答案】
void fun( char *a )
{int i,j=0;
for(i=0;a[i]!='\0';i++)
if(a[i]!='*')
a[j++]=a[i];
a[j]='\0';
*/
