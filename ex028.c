/*
编写函数fun，其功能是：将1到m之间(含m)能被7或11整除的所有整数放在数组a中，并通过n返回这些数的个数。例如，若传给m的值为50，则程序输出：
7　11　14　21　22　28　33　35　42　44　49
 */
#include <stdio.h>
#include <stdlib.h>

int fun(int *a, int *n, int *s)
{
    int i, count=0;
    for(i=1; i<50; i++)
    {
        if((i%7==0) || (i%11==0)){
            *(s++) = i;
            count++;
        }
    }
    *s = 0;
    *n = count;
}

int main()
{
    int i, n, a[50], *s;
    s = (int *)malloc(50);
    for(i=0; i<50; i++){
        a[i] = i+1;
    }
    fun(a, &n, s);
    while(*s)
    {
        printf("%d\n", *s);
        s++;
    }

    printf("The number is %d\n", n);
}
