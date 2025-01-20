#include <stdlib.h>
#include "../sort_list.h"

t_list *sort_list(t_list* lst, int (*cmp)(int, int)) {
    int swap;
    t_list *start;

    start = lst;

    while (lst != NULL && lst->next != NULL)
    {
        if ((*cmp)(lst->data, lst->next->data) == 0) // check the subjet
	{
            swap = lst->data;
            lst->data = lst->next->data;
            lst->next->data = swap;
            lst = start;
        }
	else
		lst = lst->next;
    }
    return (start);
}

//   ---------------------
//   ::  test it dear   :: 
//   ---------------------


#include <stdio.h>
// Comparison function for ascending order
// REMIDER: function given in the subject. 
int ascending(int a, int b) {
	return (a <= b);
}

// Function to create a new node
t_list *new_node(int data) {
    t_list *new_node = (t_list *)malloc(sizeof(t_list));
    if (!new_node) return NULL;
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

// Function to print the list
void print_list(t_list *lst) {
    while (lst != NULL) {
        printf("%d ", lst->data);
        lst = lst->next;
    }
    printf("\n");
}

int main() {
    // Create a sample list: 4 -> 3 -> 1 -> 2
    t_list *lst = new_node(4);
    lst->next = new_node(3);
    lst->next->next = new_node(1);
    lst->next->next->next = new_node(2);
    lst->next->next->next->next = new_node(4);

    printf("Original list: ");
    print_list(lst);

    // Sort the list
    lst = sort_list(lst, ascending);

    printf("Sorted list: ");
    print_list(lst);

    // Free the list
    t_list *tmp;
    while (lst != NULL) {
        tmp = lst;
        lst = lst->next;
        free(tmp);
    }
    return 0;
}