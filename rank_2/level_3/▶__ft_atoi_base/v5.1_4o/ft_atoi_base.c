/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rita <rita@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 11:12:23 by rita              #+#    #+#             */
/*   Updated: 2025/02/05 17:07:47 by rita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
    return (0);
}
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
int ft_atoi_base(const char *str, int str_base) {
    int i = 0;
    int result = 0;
    int sign = 1;
    int digit;

    // Handle empty string
    if (!str || str[i] == '\0')
        return (0);

    // Handle negative sign
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }

    // Convert string to integer
    while (str[i])
    {
        if (ft_isdigit(str[i]) == 1)
            digit = str[i] - '0';
        else if (ft_isalpha(str[i]) == 1)
            digit = ft_tolower(str[i]) - 'a' + 10;
        else
            break;

        if (digit >= str_base)                          // If the digit is not valid in the given base, exit the loop
            break;

        result = result * str_base + digit;             // This line updates the result by multiplying the current result by the base (str_base) and then adding the current digit. This effectively shifts the current result left by one digit in the given base and adds the new digit to the least significant place.
        i++;
    }
    return result * sign;
}

//   ----------------------
//   ::  visualisation   :: 
//   ----------------------
/*
    Assume we have the string "1a" and the base is 16 (hexadecimal).

    ## First Iteration:

    - str[i] is '1'.
    - ft_isdigit('1') returns 1, so digit = '1' - '0' which is 1.
    - result = result * 16 + digit which is 0 * 16 + 1 resulting in 1.
   
    ## Second Iteration:

    - str[i] is 'a'.
    - ft_isdigit('a') returns 0, so we check ft_isalpha('a') which returns 1.
    - digit = ft_tolower('a') - 'a' + 10:
    - ft_tolower('a') is 'a'.
    - 'a' - 'a' is 0.
    - 0 + 10 is 10.
    - result = result * 16 + digit which is 1 * 16 + 10 resulting in 26.
    
    >>> So, the string "1a" in base 16 is converted to the integer 26. <<<
*/


//   ---------------------
//   ::  test it dear   :: 
//   ---------------------
#include <stdio.h>
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
