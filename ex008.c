/*编写函数fun，其功能是：求ss所指字符串中指定字符的个数，并返回此值。
例如，若输入字符串123412132，输入字符为1，则输出3。
*/

#include<stdio.h>
#include<string.h>
int fun(char *ss, char s)
{
	int count=0, i=0;
	for(i=0; i<strlen(ss); i++)
	{
		if(*(ss+i)==s)	count++;
	}
	return count;
}

int main()
{
	char *ss="123412132";
	char s='1';
	printf("The string has %d specific character in it\n", fun(ss, s));
}
/*【参考答案】
int fun(char *ss, char c)
{int i=0;
for(;*ss!='\0';ss++)
if(*ss==c)
i++;
return i;}
*/
