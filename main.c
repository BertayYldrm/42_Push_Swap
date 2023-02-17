#include "pushswap.h"

void ordinal_number(t_list *a, char **ag)
{
    int i;
    int k;
    int j;

    k = 0;
    j = 1;
    i = 1;
    while(ag[i])
    {
        k += atoi_cal_and_che(ag[i]);
        i++;
    }
    while(a->next != NULL)
    {
        if(a->content < a->next->content)
            j++;
        a = a->next;
    }
    if(k == j)
        exit(0);
}

int   repeating_number(t_list *a)
{
    t_list *iter;
    t_list *iter2;
    int i;
    iter = a;
    i = 0;
    while(iter->next != NULL)
    {
        iter2 = iter->next;  
        while(iter2)
        {
            if(iter->content == iter2->content)
            {
                write(2,"Error\n",6);
                return (1);
            }
            iter2 = iter2->next;
        }
        iter = iter->next;
        i++;
    }
    return(0);
}

t_list   *add_a (int ac, char **ag)
{
    t_list *iter;
    t_list *list;
    int i;
    int *number;
    int j;
    int kk;

    i = 0;
    j = 0;
    list = (t_list *)malloc(sizeof(t_list));
    iter = list;
    while(++i < ac)
    {
        kk = atoi_cal_and_che(ag[i]);
        number = ft_atoi(ag[i]);
        while(kk-- > 0)
        {
            list->content = number[j++];
            if (i == ac - 1 && kk == 0)
            {
                list->next = NULL;
                break;
            }
            list->next = (t_list *)malloc(sizeof(t_list));
            list = list->next;
        }
        j = 0;
        free(number);
    }
    return iter;
}

int main(int ac, char **ag)
{
    t_list *a;
    t_list *b;
    t_list *iter;
    iter = b;
    b = NULL;
    if(ac <= 1)
        return 0;

    a = add_a(ac, ag);
    if(repeating_number(a) == 1)
    {
        free(a);
        return (0);
    }
    ordinal_number(a,ag);


    index_finder(&a);
    a_to_b(&a,&b);
    b_to_a(&a,&b);
    // printf("-----MAIN MASS--------\n");
  
    // while (a != NULL)
    // {
    //     printf("a = %d----->",a->content);
    //     printf("index = %d\n",a->index);
    //     a = a->next;
    // }
    // while (b != NULL)
    // {
    //     printf("b = %d----->",b->content);
    //     printf("index = %d\n",b->index);
    //     b = b->next;
    // }
    return (0);
}