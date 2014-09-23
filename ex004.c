/*编写函数fun，其功能是：实现两个字符串的连接(不要使用库函数strcat)，
即把p2所指的字符串连接到p1所指的字符串的后面。
例如，分别输入下面两个字符串：
FirstString－－
SecondString
程序输出：
FirstString－－SecondString
*/
#include<stdio.h>
#include<string.h>
char* fun(char *p1, char *p2)
{
	int i=0;
	for(i=0; i<strlen(p2); i++)
	{
		*(p1+strlen(p1))=*(p2+i);//strlen中的p1自增，因此不用写成*(p1+strlen(p1)+i)
		printf("%s\n", p1);
	}
	return p1;
}

int main()
{
    char * p1, *p2, *p3;
    char a1[100]="FirstString--", a2[100]="SecondString";
    p1=a1; p2=a2;
    p3=fun(p1, p2);
    printf("%s\n", p3);
    return 0;
}
/*void fun(char p1[], char p2[])
{int i,j;
for(i=0;p1[i]!='\0';i++) ;
for(j=0;p2[j]!='\0';j++)
p1[i++]=p2[j];
p1[i]='\0';}

*/
