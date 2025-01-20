#include "../ft_list.h"

// Recursive function to apply a given function to each element of the list
void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    if (begin_list == 0)
        return;
    
    // Apply the function to the current element's data
    (*f)(begin_list->data);
    
    // Recursively call the function for the next element in the list
    ft_list_foreach(begin_list->next, f);
}


// :: test it dear :: 
// // #include <stdio.h>

// // // random easy function you can do whatever you want :
// // void print_data(void *data) {
// //     printf("%s\n", (char *)data);
// // }

// // int main() {
// //     t_list node4 = {NULL, "secret data 4"};
// //     t_list node3 = {&node4, "secret data 3"};
// //     t_list node2 = {&node3, "secret data 2"};
// //     t_list node1 = {&node2, "secret data 1"};
// //     ft_list_foreach(&node1, print_data);
// //     return 0;
// // }