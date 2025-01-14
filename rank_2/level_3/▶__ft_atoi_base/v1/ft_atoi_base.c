// personal. Reference v2(unknown) and v5(GPT-4o)

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rita <rita@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 13:36:39 by rita              #+#    #+#             */
/*   Updated: 2025/01/14 13:36:40 by rita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_isdigit(char c){
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);	
}

int	ft_isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

char	ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return c;	
}

int	ft_atoi_base(const char *str, int str_base)
{
	int res = 0;
	int	power = 1;
	int current_digit;
	int i = 0;

	// if null or empty string stop & return 0
	if ( !str || str[i] == '\0')
		return (0);
	
	// if negative power = -1
	if (str[i] == '-')
	{
		power = power * -1;
		i++;
	}

	while (str[i] != '\0')
	{
		if (ft_isdigit(str[i]))
			current_digit = str[i] - '0'; // form to swap a (char)number to (int)number
		else if (ft_isalpha(str[i]))
			current_digit = ft_tolower(str[i]) - 'a' + 10; // form to swap  (char)char to (int)number
		else
			break;

		// if the current digit is >= to str_base we break the loop
		if (current_digit >= str_base) 
			break;
		
		// formula to add every digit into res
		res = res * str_base + current_digit;
		i++;
	}
	return res * power;

}

// // #include <stdio.h>
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

// //     // //* edge cases
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
