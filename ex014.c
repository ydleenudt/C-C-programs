/*规定输入的字符串中只包含字母和*号
请编写函数fun，其功能是：将字符串尾部的*号全部删除，前面和中间的*号不动
例如，字符串中的内容为："****A*BC*DEF*G*******"
删除后，字符串中的内容应当是："****A*BC*DEF*G"
在编写函数时，不得使用C语言提供的字符串函数。
*/

#include <stdio.h>

char fun( char *a )
{
    while(*a!='\0') a++;
    a--;
    while(*a=='*')  a--;
    *(a+1)='\0';
}

int main()
{
    char* init = "****A*BC*DEF*G*******";
    //char *init = temp;
    fun(init);
    puts(init);
}
