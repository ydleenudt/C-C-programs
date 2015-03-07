#include <stdio.h>
#include <stdlib.h>


void fun(char **s)
{
    int n=0, i=0;
    int t[50];
    while(**s=='*'){
        (*s)++;
        n++;
    }
}

int main()
{
    char *s = "*******A*BC*DEF*G****";
    fun(&s);
    puts(s);
}
