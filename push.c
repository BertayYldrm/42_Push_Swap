#include "pushswap.h"

void push_a(t_list **a, t_list **b)
{
    t_list *iter;
    t_list *iterb;

    iterb = *b;
    iter = malloc(sizeof(t_list));
    iter->content = iterb->content;
    iter->next = *a;
    *a = iter;
    *b = iterb->next;
    free(iterb);
}