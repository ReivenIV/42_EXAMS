// source : https://github.com/cgrasser-42-Projects/libft/blob/main/src/ft_itoa.c

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rita <rita@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:54:52 by cgrasser          #+#    #+#             */
/*   Updated: 2025/01/14 11:16:26 by rita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdlib.h>
/*

	DESCRIPTION :
	The ft_itoa function converts an integer n to a string representation.
	It handles special cases such as -2147483648 and works by recursively
	breaking down the number into its individual digits using the helper
	function ft_itoa_recur. The nbr_len function is used to calculate the
	length of the resulting string. The function allocates memory for the
	string, handles negative numbers by adding a minus sign, and fills
	the string with digits.

	RETURN VALUE :
	It returns a pointer to a string representing the integer n.
	If the allocation fails, it returns NULL.

*/

static size_t	nbr_len(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len = 1;
	if (n < 0)
		n = -n;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_itoa_recur(int n, size_t *i, char *nbr_str)
{
	if (n >= 10)
	{
		ft_itoa_recur(n / 10, i, nbr_str);
		ft_itoa_recur(n % 10, i, nbr_str);
	}
	else
		nbr_str[(*i)++] = n + 48;
}

char	*ft_itoa(int n)
{
	char	*to_return;
	size_t	len;
	size_t	i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = nbr_len(n);
	to_return = (char *)malloc(len + 1);
	if (!to_return)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		to_return[i++] = '-';
		n = -n;
	}
	ft_itoa_recur(n, &i, to_return);
	to_return[i] = '\0';
	return (to_return);
}