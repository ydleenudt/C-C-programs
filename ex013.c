/*编写函数void fun(char *tt，int pp[])
统计在tt所指的字符串中'a'到'z'26个小写字母各自出现的次数，并依次放在pp所指的数组中
例如，当输入字符串abcdefgabcdeabc后，程序的输出结果应该是：
3 3 3 2 2 1 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
*/

#include"stdio.h"
#include"stdlib.h"

void fun(char *tt, int pp[])
{
	int i;
	for(i=0; i<26; i++){
		pp[i]=0;
	}

	while(*tt!='\0')
	{
		if(('a'<=*tt) && (*tt<='z'))
		{
			pp[*tt-'a']++;
			tt++;
		}
	}
}


int main(void)
{
	char *tt="abcdefgabcdeabc";
	int pp[26];
	fun(*tt, pp[]);
	puts(tt);
}


/*
【参考答案】
void fun(char *tt, int pp[])
{int i;
for(i=0;i<26;i++)
pp[i]=0;
for(;*tt!='\0';tt++)
if(*tt>='a'&&*tt<='z')
pp[*tt-'a']++;
}

*/
