/*
函数fun的功能是：将s所指字符串中下标为偶数的字符删除，剩余字符形成的新串放在t所指数组中。
例如，当s所指字符串中的内容为"ABCDEFGHIJK"时，在t所指数组中的内容应是："BDFHJ"。
*/

#include <stdio.h>

/*
void fun(char *s, char *t)
{
    int n=0;
    while(*s)
    {
        if(n%2 == 0){
            *t = *s;
            t++;
        }
        n++;
    }
}
*/
void fun(char *s, char t[])
{int i,j=0,k=strlen(s);
for(i=1;i<k;i=i+2)
t[j++]=s[i];
t[j]='\0';}


int main()
{
    char s[] = "ABCDEFGHIJK";
    char *t;
    t = malloc(10);
    fun(s, t);
    puts(t);
}
