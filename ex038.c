/*
请编写函数fun,函数的功能是：移动一维数组中的内容,若数组中有n个整数,要求把下标从0~p（含p,p小于 等于n-1）的数组元素平移到数组的最后。例如,一维数组中的原始内容：1,2,3,4,5,6,7,8,9,10;p的值为3。移动后,一维数组中的内容应为： 5,6,7,8,9,10,1,2,3,4。
*/

#include <stdio.h>
#include <stdlib.h>

void fun(int *a, int n, int p)
{
    int i, k=0, b[n];
    for(i=p+1; i<n; i++)
    {
        b[k++] = a[i];
    }
    for(i=0; i<p+1; i++)
    {
        b[k++] = a[i];
    }
    for(i=0; i<n; i++)
    {
        a[i] = b[i];
    }
}

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int p=3;
    int n=sizeof(a)/sizeof(a[0]);
    int i;
    fun(a, n, p);
    for(i=0; i<sizeof(a)/sizeof(a[0]); i++){
        printf("%d\n", a[i]);
    }
}
