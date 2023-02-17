#include "pushswap.h"

void swap_a(t_list **a)
{
    t_list *tmp;
    t_list *iter;
    iter = *a;

    tmp = malloc(sizeof(t_list));

    *tmp = *iter;
    tmp->next = iter->next->next;
    iter = iter->next;
    iter->next = tmp;
    *a = iter;
    write(1,"sa\n",3);
}

void swap_b(t_list **b)
{
    t_list *tmp;
    t_list *iter;
    iter = *b;

    tmp = malloc(sizeof(t_list));

    *tmp = *iter;
    tmp->next = iter->next->next;
    iter = iter->next;
    iter->next = tmp;
    *b = iter;
    write(1,"sb\n",3);
}

void swap_ss(t_list **a, t_list **b)
{
    t_list *tmp;
    t_list *iter;
    iter = *a;
    t_list *tmp2;
    t_list *iter2;
    iter2 = *b;

    tmp = malloc(sizeof(t_list));

    *tmp = *iter;
    tmp->next = iter->next->next;
    iter = iter->next;
    iter->next = tmp;
    *a = iter;

    tmp2 = malloc(sizeof(t_list));
    *tmp2 = *iter2;
    tmp2->next = iter2->next->next;
    iter2 = iter2->next;
    iter2->next = tmp2;
    *b = iter2;
    write(1,"ss\n",3);
}
