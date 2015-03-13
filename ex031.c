/*
请编写函数fun，其功能是：找出一维整型数组元素中最大的值及其所在的下标，并通过形参传回。
数组元素中的值已在主函数中赋予。主函数中x是数组名，n是x中的数据个数，max存放最大值，index存放最大值所在元素的下标。
 */
#include <stdio.h>
#include <stdlib.h>

double fun(double x[], double *max, int *index)
{
    int i;
    double temp;
    for(i=0; i<sizeof(x); i++)
    {
        if(*max < x[i])
        {
            *max = x[i];
            *index = i;
        }
        else
            continue;
    }
}

int main()
{
    double x[3] = {1.0, 2.0, 4.0, 3.0};
    double max;
    int index;
    fun(x, &max, &index);
    printf("The highest score is in %d, its content is %lf", index+1, max);
}
