#include "pushswap.h"

void null_last_list(t_list **list)
{
	t_list *iter;

	iter = *list;
    while(iter->next != NULL)
        iter = iter->next;
	iter->next = NULL;
}


void index_finder(t_list **a)
{
	int i = 0;
	int j;
	t_list *iter;
	t_list *main;
	main = *a;
	iter = *a;
	while(iter != NULL)
	{
		iter = iter->next;
		i++;
	}
	int *str;
	str = malloc(sizeof(int) * i);
	j = i;
	i = 0;
	while(main != NULL)
	{
		str[i] = main->content;
		main->index_size = j;
		i++;
		main = main->next;
	}
	i = 0;
	int tmp;
	int k = 0;

	while (i < j)
	{
		k = 0;
		while (k < j)
		{
			if (str[i] < str[k])
			{
				tmp = str[i];
				str[i] = str[k];
				str[k] = tmp;
			}
			k++;
		}
		i++;
	}
	i = 0;
	t_list *root;
	root = *a;
	while(j > i)
	{
		if(root->content == str[i])
		{
			root->index = i;
			i++;
		}
		root = root->next;
		if(root == NULL)
			root = *a;
	}
	free(str);
}


