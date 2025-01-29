// ref v4

#include <stdio.h>
#include <stdlib.h>

static int	ft_intlen(int nb)
{ 
	int count = 0;
    if (nb >= 0 && nb <= 9)
        return (1);
    if (nb < 0)
	{
		count++;
		return (count = 1 + ft_intlen(-nb / 10 * -1));
	}
    return (count = 1 + ft_intlen(nb / 10));
}


char	*ft_itoa(int n)
{
	char	*dest;
	int		len;
	long	nb;
	nb = n;
	len = ft_intlen(nb);
	dest = malloc(sizeof(char) * len + 1);
	if (!dest)
		return (NULL);
	dest[len] = '\0';
	if (nb == 0)
		dest[0] = '0';
	if (nb < 0)
	{
		dest[0] = '-';
		nb *= -1;
	}
	while (nb != 0)
	{
		dest [len - 1] = (nb % 10) + '0';
		nb /= 10;
		len--;
	}
	return (dest);
}

//   ---------------------
//   ::  test it dear   :: 
//   ---------------------

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


//* maint to test ft_intlen
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