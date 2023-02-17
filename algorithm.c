#include "pushswap.h"

void a_to_b(t_list **a, t_list **b)
{
    t_list *iter;
    int j; 

    iter = *a;
    j = iter->index_size - 2;
    printf("%d\n", j);
    while(iter->next->next != NULL)
    {
        if(iter->index < j && iter->next->index < j)
        {
            if(iter->index > iter->next->index)
            {
                swap_a(a);
                push_b(a,b);
                push_b(a,b);
            }
            else
            {
                push_b(a,b);
                push_b(a,b);
            }
        }
        else if(iter->index < j)
            push_b(a,b);
        else
            rotate_a(a);
        iter = *a;
    }
    if(iter->content > iter->next->content)
        swap_a(a);
}

void b_to_a(t_list **a, t_list **b)
{
    printf("--------\n");
    t_list *iter;
    int j;

    iter = *b;
    j = iter->index_size - 3;

    int kk = 0;
    printf("j = %d\n", j);
    while(iter != NULL)
    {
        if(iter->index == j)
        {
            push_a(a,b);
            j--;
        }
        else if(iter->index < iter->next->index)
        {
            swap_b(b);
        }
        else
            r_rotate_b(b);
        kk++;
        iter = *b;
    }
}
