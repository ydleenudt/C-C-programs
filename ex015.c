/*编写函数fun，其功能是：
比较字符串的长度，(不得使用C语言提供的求字符串长度的函数)，函数返回较长的字符串。若两个字符长度相同，则返回第一个字符串。
例如，输入beijing<CR>shanghai<CR>(<CR>为回车键)，函数将返回shanghai。
*/
#include <stdio.h>
#include <string.h>

char fun(char *str1, char *str2)
{
	int i=0;
	while((*(str1+i)!='\0')&&(*(str2+i)!='\0'))
		{
			i++;
			continue;
		}
	if(*(str2+i)!='\0')
		printf("%s\n", str2);
	else
		printf("%s\n", str1);
}

int main(void)
{
	//char* str1;
	//char* str2;
	char str1[20];
	char str2[20];
	scanf("%s", &str1);
	scanf("%s", &str2);
	fun(str1, str2);
}
