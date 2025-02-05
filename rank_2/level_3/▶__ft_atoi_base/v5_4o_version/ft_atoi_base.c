/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rita <rita@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 11:12:23 by rita              #+#    #+#             */
/*   Updated: 2025/02/05 09:32:01 by rita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_atoi_base(const char *str, int str_base) {
    int result = 0;
    int sign = 1;
    int digit;

    // Handle empty string
    if (!str || *str == '\0')
        return 0;

    // Handle negative sign
    if (*str == '-') {
        sign = -1;
        str++;
    }

    // Convert string to integer
    while (*str) {
        if (isdigit(*str))
            digit = *str - '0';
        else if (isalpha(*str))
            digit = tolower(*str) - 'a' + 10;
        else
            break;

        if (digit >= str_base)
            break;

        result = result * str_base + digit;
        str++;
    }

    return result * sign;
}


//   ---------------------
//   ::  test it dear   :: 
//   ---------------------
// test XS (handy for the exam)
// // int main() {
// //     const char *number = "F4240";
// //     int base = 16;
// //     int result = ft_atoi_base(number, base);
// //     printf("Number: %s in base %d is %d\n", number, base, result);
// //     return 0;
// // }

// test XL
// // int main()
// // {
// //     const char *test1 = "1A";
// //     const char *test2 = "-1A";
// //     const char *test3 = "1010";
// //     const char *test4 = "7F";
// //     const char *test5 = "F4240";

// //     printf("Test 1: %s in base 16 is::  %d\n", test1, ft_atoi_base(test1, 16));
// //     printf("Test 2: %s in base 16 is:: %d\n", test2, ft_atoi_base(test2, 16));
// //     printf("Test 3: %s in base 2 is:: %d\n", test3, ft_atoi_base(test3, 2));
// //     printf("Test 4: %s in base 16 is:: %d\n", test4, ft_atoi_base(test4, 16));
// //     printf("Test 5: %s in base 16 is:: %d\n", test5, ft_atoi_base(test5, 16));

// //     printf("\n");

// //     //* edge cases
// //     const char *edge_case1 = "Z"; 
// //     const char *edge_case2 = "+"; 
// //     const char *edge_case3 = "+1010"; 
// //     const char *edge_case4 = "----1010"; 
// //     printf("edge_case1:: %s in base 16 is:: %d\n", edge_case1, ft_atoi_base(edge_case1, 16));
// //     printf("edge_case2:: %s in base 16 is:: %d\n", edge_case2, ft_atoi_base(edge_case2, 16));
// //     printf("edge_case3:: %s in base 16 is:: %d\n", edge_case3, ft_atoi_base(edge_case3, 16));
// //     printf("edge_case4:: %s in base 16 is:: %d\n", edge_case4, ft_atoi_base(edge_case4, 16));

// //     return 0;
// // }
