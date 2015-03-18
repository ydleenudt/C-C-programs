/*
请编写函数fun,该函数的功能是：删除一维数组中所有相同的数,使之只剩一个。数组中的数已按由小到大的顺序排列,函数返回删除后数组中数据的个数。
例如,若一维数组中的数据是：
2 2 2 3 4 4 5 6 6 6 6 7 7 8 9 9 10 10 10
删除后,数组中的内容应该是：
2 3 4 5 6 7 8 9 10。
 */

#include <stdio.h>
#include <stdlib.h>

void fun(int s[], int length)
{
    int i, j=0;
    int num_now = s[0];

    s[j++] = num_now;
    //printf("%d\n\n", num_now);
    for(i=0; i<length; i++)
    {
        if(s[i] == num_now){
                continue;
        }
        else
        {
            s[j++] = s[i];
            num_now = s[i];
        }
    }
}

int main(void)
{
    int s[]={2, 2, 2, 3, 4, 4, 5, 6, 6, 6, 6, 7, 7, 8, 9, 9, 10, 10, 10};
    int i, length=sizeof(s)/sizeof(s[0]);
    fun(s, length);
    for(i=0; i<length; i++)
    {
        printf("%d\n", s[i]);
    }
}
