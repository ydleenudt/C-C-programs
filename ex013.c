/*±àÐ´º¯Êývoid fun(char *tt£¬int pp[])
Í³¼ÆÔÚttËùÖ¸µÄ×Ö·û´®ÖÐ'a'µ½'z'26¸öÐ¡Ð´×ÖÄ¸¸÷×Ô³öÏÖµÄ´ÎÊý£¬²¢ÒÀ´Î·ÅÔÚppËùÖ¸µÄÊý×éÖÐ
ÀýÈç£¬µ±ÊäÈë×Ö·û´®abcdefgabcdeabcºó£¬³ÌÐòµÄÊä³ö½á¹ûÓ¦¸ÃÊÇ£º
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
	fun(tt, pp);
	puts(tt);
	int i=0;
	for(i=0; i<26; i++){
		printf("%d", pp[i]);
	}
}


/*
¡¾²Î¿¼´ð°¸¡¿
void fun(char *tt, int pp[])
{int i;
for(i=0;i<26;i++)
pp[i]=0;
for(;*tt!='\0';tt++)
if(*tt>='a'&&*tt<='z')
pp[*tt-'a']++;
}

*/
