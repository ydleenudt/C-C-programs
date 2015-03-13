/*
N名学生的成绩已在主函数中放入一个带有头节点的链表结构中，h指向链表的头节点。请编写函数fun
其功能是：找出学生的最高分，并由函数值返回。
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct grade
{
    double score;
    struct grade *next;
};

typedef struct grade NODE;


double fun(NODE *head)
{
    double max = head->score;
    while(head!=NULL)
    {
        if(max<head->score) max=head->score;
        head=head->next;
    }
    return max;
}

int main()
{
    NODE *head, *pnew;
    double score;

    head = (NODE *)malloc(sizeof(NODE));
    head->next = NULL;

    pnew = (NODE *)malloc(sizeof(NODE));
    pnew->score = 95;
    pnew->next = NULL;
    head->next = pnew;

    pnew->score = 96;
    pnew->next = NULL;

    printf("head->next->score is %lf\n", head->next->score);
    printf("The highest score is %lf\n",fun(head));
}
