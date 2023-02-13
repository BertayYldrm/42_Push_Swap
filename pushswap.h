#ifndef PUSHSWAP_H
#define PUSHSWAP_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct s_list
{
    int content;
    struct s_list *next;
}           t_list;

/*
typedef struct s_atoi
{
    int i;
    int sign;
    int *number;
    int j;
    int k;
}           t_atoi;
*/





int	    *ft_atoi(char *str);
void    print_list(t_list *a);
int     number_checker(char *str, int k);
int     atoi_cal_and_che(char *str);
void    ft_error(void);
int ft_strlen(char *str);
void ordinal_number(t_list *a, char **ag);
void swap_a(t_list **a);
void swap_b(t_list **b);
void swap_ss(t_list **a, t_list **b);
void push_a(t_list **a, t_list **b);



#endif