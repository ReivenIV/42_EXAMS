// source : GPT 4o

#include "../ft_list.h" // i added "../" because we have different folders in the exam you will don't need '../'
#include <stdio.h>

int ft_list_size(t_list *begin_list) {
    int count = 0;
    for (t_list *current = begin_list; current != NULL; current = current->next) {  // not sure that we can do for loop in the exam.
        count++;
    }
    return count;
}
//-------------------------------------------

// :: test it my dear ::

#include <stdlib.h>
// Helper function to create a new node
t_list *create_node(void *data) {
    t_list *new_node = (t_list *)malloc(sizeof(t_list));
    if (!new_node) return NULL;
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

int main() {
    t_list *head = create_node("Node 1");
    head->next = create_node("Node 2");
    head->next->next = create_node("Node 3");
    head->next->next->next = create_node("Node 4");

    int size = ft_list_size(head);
    printf("List size: %d\n", size); // Expected output: List size: 3

    // Free the allocated memory
    t_list *current = head;
    t_list *next;
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    return 0;
}