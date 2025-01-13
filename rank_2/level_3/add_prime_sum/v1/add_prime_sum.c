/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rita <rita@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:27:35 by rita              #+#    #+#             */
/*   Updated: 2025/01/13 15:27:35 by rita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int res = 0;
	int i = 0;
	
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res);
}

// // #include <stdio.h>
// // int main(void)
// // {
// // 	char *str = "7";
// // 	printf("%i", ft_atoi(str));	
// // 	return(0);
// // }

void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	char digit = n % 10 + '0';
	write(1, &digit, 1);
}

// // int main(void)
// // {
// // 	ft_putnbr(5);
// // 	return (0);
// // }


// will check if the number is prime or not (divisible by other numbers or not)
int	is_prime(int n)
{
	int i;

	// without these statement in main we will have an extra loop and +1 in every output. 
	if (n <= 1)
		return (0);
	i = 2;
	while (i < n)
	{
		// if falzy (n%i=0) is not a prime number.
		if (!(n % i))
			return (0);
		i++;
	}
	return (1);
}

// // #include <stdio.h>
// // int main(void)
// // {
// // 	printf("%i", is_prime(7));	// should output 1
// // 	return(0);
// // }

int main(int ac, char **av)
{
	if(ac != 2)
	{
		ft_putnbr(0);
		return (0);
	}
	
	if (ac == 2)
	{
		int n = ft_atoi(av[1]);
		int sum = 0;
		
		while (n > 0)
		{
			if (is_prime(n))
			{
				sum = sum + n;
			}
			n--;
		}
		ft_putnbr(sum);
	}
	write(1, "\n", 1);
	return (0);
}