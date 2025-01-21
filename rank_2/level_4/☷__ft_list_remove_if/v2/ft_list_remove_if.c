// Passed Moulinette 2019.09.01
// source : https://github.com/pasqualerossi/42-School-Exam-Rank-02/blob/main/Level%204/ft_list_remove_if/ft_list_remove_if.c

#include <stdlib.h>
#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	if (begin_list == NULL || *begin_list == NULL)
		return;

	t_list *cur = *begin_list;

	if (cmp(cur->data, data_ref) == 0)
	{
		*begin_list = cur->next;
		free(cur);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	else // if there is a no else, you cant pass the Moulinette, tryed 2023.09.08
	{
		cur = *begin_list;
		ft_list_remove_if(&cur->next, data_ref, cmp);
	}
}
//-------------------------------------------
// 			:: test it dear !! ::
//-------------------------------------------

#include <stdio.h>


void print_list(t_list *list)
{
    while (list)
    {
        printf("%s -> ", (char *)list->data);
        list = list->next;
    }
    printf("NULL\n");
}

int cmp(void *data1, void *data2)
{
    return (data1 == data2) ? 0 : 1;  // ternary operation::  if true=0 else =1;
}

t_list *create_elem(void *data)
{
    t_list *new_elem = (t_list *)malloc(sizeof(t_list));
    if (!new_elem)
        return NULL;
    new_elem->data = data;
    new_elem->next = NULL;
    return new_elem;
}

int main()
{
    t_list *list = create_elem("42");
    list->next = create_elem("school");
    list->next->next = create_elem("42");
    list->next->next->next = create_elem("students");

    printf("Original list:\n");
    print_list(list);

    ft_list_remove_if(&list, "42", cmp);

    printf("Modified list:\n");
    print_list(list);

    // Free remaining elements
    while (list)
    {
        t_list *tmp = list;
        list = list->next;
        free(tmp);
    }

    return 0;
}