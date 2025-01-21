// source : https://github.com/fwuensche/42-exam-miner/blob/master/04/4-2-ft_list_remove_if/ft_list_remove_if.c

/*   By: fwuensche <fwuensche@student.42.fr>        +#+  +:+       +#+        */
/*   Created: 2016/12/05 17:53:59 by angavrel          #+#    #+#             */
/*   Updated: 2019/03/05 08:39:05 by fwuensche        ###   ########.fr       */


// IMPORTANT : i saw these code in several repos. What when i test it i have a bug in the outputs maybe there is something wrong in the main testing area.
// for a corrected version check : v4 

#include "../ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*curr;
	t_list	*tmp;

	while (*begin_list && cmp((*begin_list)->data, data_ref) == 0)
	{
		curr = *begin_list;
		*begin_list = (*begin_list)->next;
		free(curr);
	}
	curr = *begin_list;
	while (curr && curr->next)
	{
		if (cmp(curr->next->data, data_ref) == 0)
		{
			tmp = curr->next;
			curr->next = tmp->next;
			free(tmp);
		}
		curr = curr->next;
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