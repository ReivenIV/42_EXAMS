#include "../ft_list.h"
#include <stdio.h>
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	if (*begin_list == NULL || begin_list == NULL)  							// with these "if" we stop the recursive otherwise we will have an infinit loop. 
		return ;

	t_list *curent_node = *begin_list;
	int test;

	if (cmp(curent_node->data, data_ref) == 0)
	{
		*begin_list = curent_node->next;
		free(curent_node);			 											// without free you will have leaks
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	else
		ft_list_remove_if(&curent_node->next, data_ref, cmp);
}

//-------------------------------------------
// 			:: test it dear !! ::
//-------------------------------------------

// // #include <stdio.h>
// // #include <string.h>
// // void print_list(t_list *list)
// // {
// //     while (list)
// //     {
// //         printf("%s -> ", (char *)list->data);
// //         list = list->next;
// //     }
// //     printf("NULL\n");
// // }

// // int cmp(void *data1, void *data2)
// // {
// //     return strcmp((char *)data1, (char *)data2); // REMINDER:  i'm testing with strings 
// // }

// // t_list *create_elem(void *data)
// // {
// //     t_list *new_elem = (t_list *)malloc(sizeof(t_list));
// //     if (!new_elem)
// //         return NULL;
// //     new_elem->data = data;
// //     new_elem->next = NULL;
// //     return new_elem;
// // }

// // int main()
// // {
// //     t_list *list = create_elem("42");
// //     list->next = create_elem("school");
// //     list->next->next = create_elem("BUG");
// //     list->next->next->next = create_elem("BUG");
// //     list->next->next->next->next = create_elem("students");
// //     list->next->next->next->next->next = create_elem("BUG");

// //     printf("Original list:\n");
// //     print_list(list);

// //     ft_list_remove_if(&list, "BUG", cmp);

// //     printf("Modified list:\n");
// //     print_list(list);

// //     // Free remaining elements
// //     while (list)
// //     {
// //         t_list *tmp = list;
// //         list = list->next;
// //         free(tmp);
// //     }

// //     return 0;
// // }