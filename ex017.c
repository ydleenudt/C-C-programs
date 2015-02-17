/*
函数fun的功能是：将s所指字符串中除下标为偶数同时ASCII码值也为偶数的字符外,其余的全部删除；字符串中剩余字符所形成的新串放在t所指的数组中。
例如,若s所指字符串中的内容为"ABCDEFG123456",其中字符A的ASCII码值为奇数,因此应当删除；
字符B的ASCII码值为偶数,但在数组中的下标为奇数,因此也应当删除；
字符2的ASCII码值为偶数,在数组中的下标也为偶数,因此不应当删除,其他依此类推。最后t所指的数组中的内容应是"246"。
*/

#include <stdio.h>
#include <string.h>
void fun( char *s, char *t)
{
    while(*s != ' ')
    {
        if(s%2==0 && (*s)%2==0) t++=s++;
        else
        {
            s++;
            break;
        }
    }
}

int main()
{
    char *s = "ABCDEFG123456";
    char *t;
    fun(s, t);
    puts(t);
}


/*
参考答案：
void fun(char *s, char t[])
{int i,j=0;
for(i=0;s[i]!='\0';i++)
if(i%2==0 && s[i]%2==0)
t[j++]=s[i];
t[j]='\0'; }
*/
