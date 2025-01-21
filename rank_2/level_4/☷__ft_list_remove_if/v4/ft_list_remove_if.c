/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rita <rita@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 12:06:47 by rita              #+#    #+#             */
/*   Updated: 2025/01/21 12:07:11 by rita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// IMPORTANT : updated version of v3

#include "../ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list	*curr;
    t_list	*tmp;

	if (begin_list == NULL || *begin_list == NULL)
		return;

    // Remove nodes from the beginning of the list
    while (*begin_list && cmp((*begin_list)->data, data_ref) == 0)
    {
        curr = *begin_list;
        *begin_list = (*begin_list)->next;
        free(curr);
    }

    curr = *begin_list;

    // Traverse the list and remove matching nodes
    while (curr && curr->next)
    {
        if (cmp(curr->next->data, data_ref) == 0)
        {
            tmp = curr->next;
            curr->next = tmp->next;
            free(tmp);
        }
        else
        {
            curr = curr->next;
        }
    }
}

//-------------------------------------------
// 			:: test it dear !! ::
//-------------------------------------------

#include <stdio.h>
#include <string.h>
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
    return strcmp((char *)data1, (char *)data2); // REMINDER:  i'm testing with strings 
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
    list->next->next = create_elem("BUG");
    list->next->next->next = create_elem("BUG");
    list->next->next->next->next = create_elem("students");
    list->next->next->next->next->next = create_elem("BUG");

    printf("Original list:\n");
    print_list(list);

    ft_list_remove_if(&list, "BUG", cmp);

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