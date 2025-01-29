// ref v4

#include <stdio.h>
#include <stdlib.h>

static int	count_digits(int n)
{
	int	count = 0;
	if (n >= 0 && n <= 0)
		return (1);
	if (n < 0)									// if negative will add +1 for the sign '-'
		count++;
	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}
char	*ft_itoa(int n)
{
	int		n_len;
	long	nb;

	nb = n;
	n_len = count_digits(nb);
	char *dest = malloc(sizeof(char) * n_len + 1);
	if (!dest)
		return (NULL);
	dest[n_len] = '\0';
	if (nb == 0)
		dest[0] = '0';
	if (nb < 0)
	{
		dest[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		dest [n_len - 1] = (nb % 10) + '0';
		nb /= 10;
		n_len--;
	}
	return (dest);
}

//   ---------------------
//   ::  test it dear   :: 
//   ---------------------

// // #include <stdio.h>
// // int main()
// // {
// //     int test_values[] = {0,1,5,9, -123, 456, -7890, 2147483647, -2147483648};
// //     int num_tests = sizeof(test_values) / sizeof(test_values[0]);

// //     for (int i = 0; i < num_tests; i++)
// //     {
// //         int value = test_values[i];
// //         char *result = ft_itoa(value);
// //         printf("ft_itoa(%d) = %s\n", value, result);
// //         free(result);
// //     }

// //     return 0;
// // }


//* maint to test ft_intn_len
// // int main()
// // {
// //     int test_values[] = {0, -123, 456, -7890, 2147483647, -2147483648};
// //     int num_tests = sizeof(test_values) / sizeof(test_values[0]);

// //     for (int i = 0; i < num_tests; i++)
// //     {
// //         int value = test_values[i];
// //         char *result = ft_itoa(value);
// //         printf("ft_itoa(%d) = %s\n", value, result);
// //         free(result);
// //     }

// //     return 0;
// // }