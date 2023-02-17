#ifndef PUSHSWAP_H
#define PUSHSWAP_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct s_list
{
    int content;
    struct s_list *next;
    int index;
    int index_size;
}           t_list;

void a_to_b(t_list **a, t_list **b);
void sort_a(t_list **a);
int checker_for_sort(t_list **a);
int	    *ft_atoi(char *str);
int     number_checker(char *str, int k);
int     atoi_cal_and_che(char *str);
void    ft_error(void);
void ordinal_number(t_list *a, char **ag);
void swap_a(t_list **a);
void swap_b(t_list **b);
void swap_ss(t_list **a, t_list **b);
void push_a(t_list **a, t_list **b);
void push_b(t_list **b, t_list **a);
void r_rotate_a(t_list **a);
void r_rotate_b(t_list **b);
void r_rotate_r(t_list **a, t_list **b);
void rotate_a(t_list **a);
void rotate_b(t_list **b);
void rotate_rr(t_list **a,t_list **b);
void index_finder(t_list **a);
void null_last_list(t_list **list);
void b_to_a(t_list **a, t_list **b);


#endif