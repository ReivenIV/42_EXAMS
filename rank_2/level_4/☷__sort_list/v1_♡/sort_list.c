// reference : v2

#include "../sort_list.h"

t_list *sort_list(t_list* lst, int (*cmp)(int, int)) {
    int temp_swap;
    t_list *start;

    start = lst;

    while (lst && lst->next)                         // reminder : If you not check if the nest exist you will "segment fault"
    {
        if ((*cmp)(lst->data, lst->next->data) == 0) // check the subjet 
	    {
            temp_swap = lst->data;
            lst->data = lst->next->data;
            lst->next->data = temp_swap;
            lst = start;                             // restart to the first node.
        }
        else                                         // you need the else otherwise is not going to restart properly. 
		    lst = lst->next;                         // check for the next node.
    }
    return (start);
}

//   ---------------------
//   ::  test it dear   :: 
//   ---------------------

// // #include <stdlib.h>
// // #include <stdio.h>
// // // Comparison function for ascending order
// // // REMIDER: function given in the subject. 
// // int ascending(int a, int b) {
// // 	return (a <= b);
// // }

// // // Function to create a new node
// // t_list *new_node(int data) {
// //     t_list *new_node = (t_list *)malloc(sizeof(t_list));
// //     if (!new_node) return NULL;
// //     new_node->data = data;
// //     new_node->next = NULL;
// //     return new_node;
// // }

// // // Function to print the list
// // void print_list(t_list *lst) {
// //     while (lst != NULL) {
// //         printf("%d ", lst->data);
// //         lst = lst->next;
// //     }
// //     printf("\n");
// // }

// // int main() {
// //     // Create a sample list: 4 -> 3 -> 1 -> 2
// //     t_list *lst = new_node(10);
// //     lst->next = new_node(30);
// //     lst->next->next = new_node(1);
// //     lst->next->next->next = new_node(2);
// //     lst->next->next->next->next = new_node(4);
// //     lst->next->next->next->next->next = new_node(5);
// //     printf("Original list: ");
// //     print_list(lst);
// //     // Sort the list
// //     lst = sort_list(lst, ascending);
// //     printf("Sorted list: ");
// //     print_list(lst);
// //     // Free the list
// //     t_list *tmp;
// //     while (lst != NULL) {
// //         tmp = lst;
// //         lst = lst->next;
// //         free(tmp);
// //     }
// //     return 0;
// // }