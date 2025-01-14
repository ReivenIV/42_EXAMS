#include <stdio.h>

char to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}

int get_digit(char c, int digits_in_base)
{
	int max_digit;

	if (digits_in_base <= 10)
		max_digit = digits_in_base - 1 + '0';
	else
		max_digit = digits_in_base - 10 - 1 + 'a';

	if (c >= '0' && c <= '9' && c <= max_digit)
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= max_digit)
		return (10 + c - 'a');
	else
		return (-1);
}

int ft_atoi_base(const char *str, int str_base)
{
	int result = 0;
	int sign = 1;
	int digit;

	if (str == NULL || str_base < 2 || str_base > 16)
		return 0;

	if (*str == '-')
	{
		sign = -1;
		++str;
	}

	while (*str)
	{
		digit = get_digit(to_lower(*str), str_base);
		if (digit == -1)
			break;
		result = result * str_base + digit;
		++str;
	}
	return (result * sign);
}
int main()
{
    const char *test1 = "1A";
    const char *test2 = "-1A";
    const char *test3 = "1010";
    const char *test4 = "7F";
    const char *test5 = "F4240";

    printf("Test 1: %s in base 16 is::  %d\n", test1, ft_atoi_base(test1, 16));
    printf("Test 2: %s in base 16 is:: %d\n", test2, ft_atoi_base(test2, 16));
    printf("Test 3: %s in base 2 is:: %d\n", test3, ft_atoi_base(test3, 2));
    printf("Test 4: %s in base 16 is:: %d\n", test4, ft_atoi_base(test4, 16));
    printf("Test 5: %s in base 16 is:: %d\n", test5, ft_atoi_base(test5, 16));

    const char *edge_case1 = "Z"; // Invalid character for base 16
    const char *edge_case2 = "+"; // Invalid character for base 16
    const char *edge_case3 = "+1010"; // Invalid character for base 16
    const char *edge_case3 = "----1010"; // Invalid character for base 16
    printf("edge_case1:: %s in base 16 is:: %d\n", edge_case1, ft_atoi_base(edge_case1, 16));
    printf("edge_case2:: %s in base 16 is:: %d\n", edge_case2, ft_atoi_base(edge_case2, 16));
    printf("edge_case3:: %s in base 16 is:: %d\n", edge_case3, ft_atoi_base(edge_case3, 16));

    return 0;
}