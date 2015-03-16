/*
请编写函数fun,该函数的功能是：将M行N列的二维数组中的数据,按列的顺序依次放到一维数组中。一维数组中数据的个数存放在形参n所指的存储单元中。例如,若二维数组中的数据为
33 33 33 33
44 44 44 44
55 55 55 55
则一维数组中的内容应是：
33 44 55 33 44 55 33 44 55 33 44 55
 */

#include <stdio.h>
#include <stdlib.h>


/*
void fun(int init[3][4], int out[30], int M, int N)
{
    int i, j, k=0;
    for(j=0; j<N; j++)
    {
        for(i=0; i<M; i++)
        {
            out[k++] = init[i][j];
        }
    }
}
*/

void fun(int (*s)[10],int *b,int *n,int mm,int nn)
{int i,j;
for(j=0;j<nn;j++)
for(i=0;i<mm;i++)
{b[*n]=*(*(s+i)+j);
*n=*n+1; }
}

int main()
{
    int i;
    int s[3][4] = {{33,33,33,33},{44,44,44,44},{55,55,55,55}};
    int b[30];
    int n;
    fun(s, b, &n, 3, 4);
    for(i=0; i<n; i++)
    {
        printf("%d", b[i]);
    }
    return 0;
}
