#include "pushswap.h"

void swap_a(t_list **a)
{
    int tmp;
    t_list *iter;
    iter = *a;

    tmp = iter->content;
    iter->content = iter->next->content;
    iter->next->content = tmp;
    write(1,"sa\n",3);
}

void swap_b(t_list **b)
{
    int tmp;
    t_list *iter;
    iter = *b;

    tmp = iter->content;
    iter->content = iter->next->content;
    iter->next->content = tmp;
    write(1,"sb\n",3);
}

void swap_ss(t_list **a, t_list **b)
{
    int tmp;
    t_list *iter;
    iter = *b;
    int tmp2;
    t_list *iter2;
    iter2 = *a;

    tmp = iter->content;
    iter->content = iter->next->content;
    iter->next->content = tmp;

    tmp2 = iter2->content;
    iter2->content = iter2->next->content;
    iter2->next->content = tmp2;
    write(1,"ss\n",3);
}

