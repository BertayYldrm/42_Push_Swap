#include "pushswap.h"

void r_rotate_a(t_list **a)
{
    t_list *iter;
    t_list *tmp;

    tmp = malloc(sizeof(t_list));
    
    iter = *a;
    while(iter->next->next != NULL)
        iter = iter->next;

    tmp = iter->next;
    tmp->next = *a;
    iter->next = NULL;
    *a = tmp;
    write(1,"rra\n",4);
}

void r_rotate_b(t_list **b)
{
    t_list *iter;
    t_list *tmp;

    tmp = malloc(sizeof(t_list));
    
    iter = *b;
    while(iter->next->next != NULL)
        iter = iter->next;

    tmp = iter->next;
    tmp->next = *b;
    iter->next = NULL;
    *b = tmp;
    write(1,"rrb\n",4);
}

void r_rotate_r(t_list **a, t_list **b)
{
    t_list *iter;
    t_list *iter2;
    t_list *tmp;
    t_list *tmp2;

    tmp = malloc(sizeof(t_list));
    tmp2 = malloc(sizeof(t_list));
    
    iter = *b;
    iter2 = *a;
    while(iter->next->next != NULL)
        iter = iter->next;
    while(iter2->next->next != NULL)
        iter2 = iter2->next;
    tmp = iter->next;
    tmp2 = iter2->next;
    tmp->next = *b;
    tmp2->next = *a;
    iter->next = NULL;
    iter2->next = NULL;
    *b = tmp;
    *a = tmp2;
    write(1,"rrr\n",3);
}