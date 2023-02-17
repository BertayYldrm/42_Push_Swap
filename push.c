#include "pushswap.h"

void push_a(t_list **a, t_list **b)
{
    t_list *iter;
    t_list *iterb;

    iterb = *b;
    iter = malloc(sizeof(t_list));
    *iter = *iterb;
    iter->next = *a;
    *a = iter;
    *b = iterb->next;

    write(1,"pa\n",3);
}

void push_b(t_list **a, t_list **b)
{
    t_list *iter;
    t_list *itera;

    itera = *a;
    iter = malloc(sizeof(t_list));
    *iter = *itera;
    iter->next = *b;
    *b = iter;
    *a = itera->next;

    write(1,"pb\n",3);
}