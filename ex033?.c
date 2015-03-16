/*
编写函数fun，其功能是：实现B＝A＋A'，即将矩阵A加上A的转置，存放在矩阵B中。计算结果在main函数中输出。
 */

#include <stdio.h>
#include <stdlib.h>

/*
void fun(int **a, int **b)
{
    int **c;
    int i,j;
    for(i=0; i<sizeof(*a); i++)
    {
        for(j=0; j<sizeof(*a); j++)
        {
            *(*(b+i)+j) = *(*(a+i)+j) + *(*(a+j)+i);
        }
    }
}
*/

void fun ( int a[3][3], int b[3][3])
{int i,j;
for(i=0;i<3;i++)
for(j=0;j<3;j++)
b[i][j]=a[i][j]+a[j][i];}

int main()
{
    int i,j;
    int a[3][3] = {{1,1,1},{2,2,2},{3,3,3}};
    int b[3][3];
    fun(a, b);
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("%d\n",b[i][j]);
    }
}
