/*
编写函数fun，其功能是：将s所指字符串中除了下标为奇数同时ASCII值也为奇数的字符之外，其余的所有字符全部删除，串中剩余字符所形成的一个新串放在t所指的数组中。
例如，若s所指字符串的内容为："ABCDEFG12345"，其中字符A的ASCII码值为奇数，但所在元素的下标为偶数，因此需要删除；而字符1的ASCII码值为奇数，所在数组中的下标也为奇数，因此不应当删除，其它依此类推。最后t所指数组中的内容应为："135"。
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fun(char *s, char *t)
{
    int i=0,j=0;
    while(*(s+i) != '\0')
    {
        if((i%2 != 0) && ((*(s+i))%2 != 0)){
            *(t+j) = *(s+i);
            //printf("%c\n", *(s+i));
            //printf("%c\n", temp[j-1]);
            j++;
        }
        i++;
    }
    *(t+j) = '\0';
    //printf("%c", temp[j]);
    //strcpy(t, temp);
}

int main()
{
    char *s = "ABCDEFG12345";
    char t[30];
    puts(s);
    fun(s, t);
    puts(t);
}
