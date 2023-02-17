#include "pushswap.h"

void rotate_a(t_list **a)
{
    t_list *main;
    t_list *iter;
    t_list *iter2;

    main = malloc(sizeof(t_list));
    *main = **a;
    iter = *a;
    while(iter->next != NULL)
        iter = iter->next;
    iter->next = main;
    main->next = NULL;
    iter2 = *a;
    *a = iter2->next;
    write(1,"ra\n",3);
}

void rotate_b(t_list **b)
{
    t_list *main;
    t_list *iter;
    t_list *iter2;
    

    main = malloc(sizeof(t_list));
    *main = **b;
    iter = *b;
    while(iter->next != NULL)
        iter = iter->next;
    iter->next = main;
    main->next = NULL;
    iter2 = *b;
    *b = iter2->next;
    write(1,"rb\n",3);
}

void rotate_rr(t_list **a,t_list **b)
{
    t_list *maina;
    t_list *itera;
    t_list *itera2;
    t_list *mainb;
    t_list *iterb;
    t_list *iterb2;

    mainb = malloc(sizeof(t_list));
    *mainb = **b;
    iterb = *b;
    while(iterb->next != NULL)
        iterb = iterb->next;
    iterb->next = mainb;
    mainb->next = NULL;
    iterb2 = *b;
    *b = iterb2->next;
    maina = malloc(sizeof(t_list));
    *maina = **a;
    itera = *a;
    while(itera->next != NULL)
        itera = itera->next;
    itera->next = maina;
    maina->next = NULL;
    itera2 = *a;
    *a = itera2->next;
    write(1,"rr\n",3);
}

