#include "pushswap.h"

int main()
{
    t_list *a;
    t_list *b;
    t_list *c;
    t_list *d;
    c = a;
    d = b;

    a = malloc(sizeof(t_list));
    b = malloc(sizeof(t_list));
    a->content = 1;
    a->next = malloc(sizeof(t_list));
    a->next->content = 2;
    a->next->next = NULL;
    b->content = 3;
    b->next = malloc(sizeof(t_list));
    b->next->content = 4;
    b->next->next = NULL;

    rotate_a(&a);

    
}