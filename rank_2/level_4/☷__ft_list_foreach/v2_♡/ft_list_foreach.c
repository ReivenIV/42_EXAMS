#include "../ft_list.h"

// Function to apply a given function to each element of the list
void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    // Iterate through each element in the list
    while (begin_list)
    {
        // Apply the function to the current element's data
        (*f)(begin_list->data);
        // Move to the next element in the list. (imaging it's like an i++) 
        begin_list = begin_list->next;
    }
}

//   ---------------------
//   ::  test it dear   :: 
//   ---------------------

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