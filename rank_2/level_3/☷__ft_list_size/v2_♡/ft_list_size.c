// source : Unknown

#include "../ft_list.h" // i added "../" because we have different folders in the exam you will don't need '../'

int	ft_list_size(t_list *begin_list)
{
	if (begin_list == 0)
		return (0);
	else
		return (1 + ft_list_size(begin_list->next));
}

/* EXPLANATION

		>> if (begin_list == 0)    return (0);
- This checks if the current node (begin_list) is NULL (or 0).
- If it is NULL, it means we've reached the end of the list, so the function returns 0.
		>> else		return (1 + ft_list_size(begin_list->next));
- If the current node is not NULL, the function calls itself recursively with the next node (begin_list->next).
- It adds 1 to the result of the recursive call. This 1 represents the current node.
*/

//-------------------------------------------

// // #include <stdio.h>
// // #include <stdlib.h>
// // // :: test it my dear ::
// // // Helper function to create a new node
// // t_list *create_node(void *data) {
// //     t_list *new_node = (t_list *)malloc(sizeof(t_list));
// //     if (!new_node) return NULL;
// //     new_node->data = data;
// //     new_node->next = NULL;
// //     return new_node;
// // }

// // int main() {
// //     t_list *head = create_node("Node 1");
// //     head->next = create_node("Node 2");
// //     head->next->next = create_node("Node 3");
// //     head->next->next->next = create_node("Node 4");

// //     int size = ft_list_size(head);
// //     printf("List size: %d\n", size); // Expected output: List size: 3

// //     // Free the allocated memory
// //     t_list *current = head;
// //     t_list *next;
// //     while (current != NULL) {
// //         next = current->next;
// //         free(current);
// //         current = next;
// //     }

// //     return 0;
// // }