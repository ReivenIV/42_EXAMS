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
	
	while (str[i] != '\0')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res);
}

// // #include <stdio.h>
// // int main(void)
// // {
// // 	char *str = "45";
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





int main(int ac, char **av)
{
	if(ac != 2)
		ft_putnbr(0);
}